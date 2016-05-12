#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::list;
using std::cout;
using std::endl;

int main()
{
	vector<int> v1{3, 9, 5};
	vector<int> v2{8, 1};

	cout << (v1 == v2 ? "same" : "different") << endl;

	return 0;
}