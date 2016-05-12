#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::vector<int> v1;
	std::list<int> l1;
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	for(size_t i = 0; i != 11; ++i){
		v1.push_back(ia[i]);
		l1.push_back(ia[i]);
	}

	for(auto c = l1.begin(); c != l1.end(); ){
		if(*c % 2)
			c = l1.erase(c);
		else
			++c;
	}
	for(auto c : l1)
		std::cout << c << " ";
	std::cout << std::endl;

	for(auto c = v1.begin(); c != v1.end(); ){
		if(*c % 2)
			++c;
		else
			c = v1.erase(c);
	}	
	for(auto c : v1)
		std::cout << c << " ";
	std::cout << std::endl;

	return 0;
}