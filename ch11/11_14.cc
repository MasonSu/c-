#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using std::map;
using std::string;
using std::vector;
using std::pair;

int main()
{
	map<string, vector<pair<string, string>>> family;
	string parent, str, name, birthday;
	vector<pair<string, string>> children;

	while(getline(std::cin, str)){
		std::istringstream record(str);
		record >> parent;
		while(record >> name){
			if(record >> birthday)
				children.push_back(make_pair(name, birthday));
			else
				std::cerr << name << " lack of birthday!!!" << std::endl;
		}

		family.insert(make_pair(parent, children));
		children.clear();    //注意使用的是push_back
	}
	std::cout << std::endl;

	for( auto c : family){
		std::cout << c.first << " ";
		for(auto d : c.second)
			std::cout << d.first << " " << d.second << " ";
		std::cout << std::endl;
	}

	return 0;
}