#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using std::map;
using std::string;
using std::vector;

int main()
{
	map<string, vector<string>> family;
	string parent, str;
	vector<string> children;

	while(getline(std::cin, str)){
		std::istringstream record(str);
		record >> parent;
		while(record >> str)
			children.push_back(str);

		family.insert({parent, children});
		children.clear();    //注意使用的是push_back
	}
	std::cout << std::endl;

	for( auto c : family){
		std::cout << c.first << " ";
		for(auto d : c.second)
			std::cout << d << " ";
		std::cout << std::endl;
	}

	return 0;
}