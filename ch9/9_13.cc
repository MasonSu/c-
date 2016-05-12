#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::list;

int main()
{
	list<int> l1 = {1, 4, 9, 2, 5};

	vector<double> v1(l1.cbegin(), l1.cend());
	for(auto c : v1){
		std::cout << c << " ";
	}
	std::cout << std::endl;

	return 0; 
}