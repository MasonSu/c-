#include <iostream>
#include <list>
#include <deque>

int main()
{
	std::list<int> l1;
	std::deque<int> d1, d2;
	for(size_t i = 0; i != 10; ++i)
		l1.push_front(i);

	for(auto c = l1.cbegin(); c != l1.cend(); ++c){
		if(*c % 2)
			d1.push_back(*c);
		else
			d2.push_back(*c);
	}

	for(auto c : d1)
		std::cout << c << " ";
	std::cout << std::endl;

	for(auto c : d2)
		std::cout << c << " ";
	std::cout << std::endl;

	return 0;
}