#include <vector>
#include <string>
#include <utility>
#include <iostream>

int main()
{
	std::vector<std::pair<int, std::string>> vec;
	int a;
	std::string str;
	while(std::cin >> a >> str){
		vec.push_back({a, str});
		vec.push_back(std::make_pair(a, str));
		vec.push_back(std::pair<int, std::string>(a, str));
	}
	std::cout << std::endl;

	for(auto c : vec)
		std::cout << c.first << " " << c.second << std::endl;

	return 0;

}