#include <algorithm>
using std::count;

#include <list>
using std::list;
using std::string;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	list<string> l1{"aaa", "bbb", "ccc"};
	string sval = "ddd";

	auto result = count(l1.cbegin(), l1.cend(), sval);
	cout << "The string " << sval << " present "
		 << result << " times" << endl;

	return 0;
}