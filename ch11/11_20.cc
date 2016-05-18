#include <map>
using std::map;

#include <set>
using std::set;

#include <string>
using std::string;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cctype>

int main()
{
	map<string, size_t> word_count;
	set<string> exclude = {"The", "But", "And", "Or", "An", "A", 
	                       "the", "but", "and", "or", "an", "a"};

	string word;
	while(cin >> word)
		if(exclude.find(word) == exclude.end()){
			/*将字符串中的字符转换成小写形式*/
			for(auto &c : word)
				c = tolower(c);
			/*将字符串中的标点符号删除*/
			auto iter = word.begin();
			while(iter != word.end()){
				if(ispunct(*iter))
					iter = word.erase(iter);
				else
					++iter;
			}

			//++word_count[word];
			auto ret = word_count.insert(make_pair(word, 1));
			if(!ret.second)
				++ret.first->second;
		}

	for(const auto &c : word_count)
		cout << c.first << " occurs " << c.second 
			 << ((c.second > 1) ? " times": " time") << endl;

	return 0;
}