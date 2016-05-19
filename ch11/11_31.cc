#include <map>
#include <iostream>
#include <sstream>

int main()
{
	std::multimap<std::string, std::string> authors;
	std::string name, works;
	while(std::cin >> name >> works)	
		authors.insert(make_pair(name, works));
	
	std::string search_item("Align");
	auto iter = authors.find(search_item);
	if(iter != authors.end())
		authors.erase(search_item);
	else
		std::cout << search_item << " not found!" << std::endl;

	for(const auto &c: authors)
		std::cout << c.first << " " << c.second << std::endl;

	return 0;
}