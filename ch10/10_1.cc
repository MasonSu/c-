#include <algorithm>
using std::count;

#include <vector>
using std::vector;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	vector<int> v1{5, 3, 9, 2, 7, 2, 8};
	int val = 9;

	auto result = count(v1.cbegin(), v1.cend(), val);
	cout << "The value " << val << " present "
		 << result << " times" << endl;

	return 0;
}