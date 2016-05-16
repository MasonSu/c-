#include <algorithm>
using std::unique_copy;

#include <list>
using std::list;

#include <string>
using std::string;

#include <iterator>
using std::front_inserter;
using std::back_inserter;
using std::inserter;

#include <iostream>
using std::cout;
using std::endl;

inline void print(const string &lable, const list<int> &v)
{
	cout << lable << ": ";
	for(auto c : v)
		cout << c << " ";
	cout << endl;
}

int main()
{
	std::vector<int> v1{1, 1, 3, 3, 5, 5, 7, 7, 9}; //只有相邻的重复元素才能被unique识别出来 
	list<int> v2, v3, v4;    //vector不支持push_front()

	unique_copy(v1.cbegin(), v1.cend(), back_inserter(v2));
	print("back_inserter", v2);

	unique_copy(v1.cbegin(), v1.cend(), front_inserter(v3));
	print("front_inserter", v3);

	unique_copy(v1.cbegin(), v1.cend(), inserter(v4, v4.begin()));
	print("inserter", v4);

	return 0;
}