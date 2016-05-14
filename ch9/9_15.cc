#include <iostream>
#include <vector>
#include <list>

using std::vector;

int main()
{
	vector<int> v1{3, 9, 5};
	vector<int> v2{8, 1};

	std::cout << (v1 == v2 ? "same" : "different") << std::endl;

	return 0;
}