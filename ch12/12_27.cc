#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <set>
#include <utility>
#include <map>
#include <stdexcept>

using std::vector;
using std::string;
using std::set;
using std::map;
using std::cout;
using std::endl;

void print(string word, map<string, set<int>> &output, const vector<string> &vec)
{
	auto iter = output.find(word); 
	if(iter != output.end()){
		int num = iter->second.size();
		cout << iter->first << " occurs " << num << 
				(num > 1 ? " times": " time") << endl;

		for(auto c = iter->second.begin(); c != iter->second.end(); ++c){
			cout << "\t(line " << *c << ") " <<
				 vec[*c - 1] << endl;
		}
		cout << endl;
	}					
}

void process(std::ifstream &input, vector<string> &vec)
{
	string line;
	while(getline(input, line))
		vec.push_back(line);			
}

void search(string word, const vector<string> &vec)
{
	set<int> linenum;
	map<string, set<int>> result;
	for(auto iter = vec.cbegin(); iter != vec.cend(); ++iter){
		std::istringstream record(*iter);
		string element;
		while(record >> element){
			if(element == word) {
				linenum.insert(iter - vec.cbegin() + 1);  //插入单词所在的行号
        break;
      }
		}
	}
	result.insert(make_pair(word, linenum));  //将单词和它对应的行号插入到map中
	print(word, result, vec);    //打印结果
}

int main(int argc, char **argv)
{
	vector<string> vec;

	if(argc != 2)	
		throw std::runtime_error("Argc must be two!");
	std::ifstream input(argv[1]);
	if(input){
		process(input, vec);    //将输入文本保存起来
		while(true){
			cout << "Enter word to look for, or q to quit: ";
			std::string str;
			if(!(std::cin >> str) || str == "q")
				break;	
			search(str, vec);      //查找并打印结果
		}
	}else
		throw std::runtime_error("Can't open the file!");
	
	return 0;
}

