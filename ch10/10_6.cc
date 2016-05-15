#include <algorithm>
using std::fill_n;

#include <vector>
using std::vector;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	vector<int> v1(10, 8);
	for(auto c: v1)
		cout << c << " ";
	cout << endl;

	fill_n(v1.begin(), v1.size(), 0);
	for(auto c: v1)
		cout << c << " ";
	cout << endl;

	return 0;
}