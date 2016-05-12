#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::list;
using std::string;
using std::cout;
using std::endl;

int main()
{
	list<char *> l1{"aaa", "bbb", "ccc"};

	//vector<string> v1(l1.cbegin(), l1.cend());
	vector<string> v1(10, "ddd");
	v1.assign(l1.cbegin(), l1.cend());
	for(auto c: v1)
		cout << c << " ";
	cout << endl;

	return 0;
}