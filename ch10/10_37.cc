#include <algorithm>

#include <vector>
using std::vector;

#include <list>
using std::list;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9};
	list<int> l1(6);

	std::copy(v1.crbegin() + 2, v1.crbegin() + 7, l1.begin());
	for(auto c : l1)
		cout << c << " ";
	cout << endl;

	return 0;
}