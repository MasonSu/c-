#include <vector>
using std::vector;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	vector<int> vec{0, 1, 2, 3, 4, 5};
	for(auto r_iter = vec.crbegin(); r_iter != vec.crend(); ++r_iter)
		cout << *r_iter << " ";
	cout << endl;

	for(auto iter = --vec.cend(); iter != vec.cbegin(); --iter)
		cout << *iter << " ";
	cout << *(vec.begin()) << endl;

	return 0;
}