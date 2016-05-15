#include <algorithm>
using std::accumulate;

#include <vector>
using std::vector;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	vector<int> v1{1, 4, 9, 7, 5};

	auto sum = accumulate(v1.cbegin(), v1.cend(), 0);
	cout << "sum is " << sum << endl;

	return 0;
}