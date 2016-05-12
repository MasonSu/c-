#include <iostream>
#include <deque>
#include <list>

using std::deque;
using std::string;
using std::list;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	deque<string> d1;
	string s1;
	while(cin >> s1)
		d1.push_back(s1);

	for(auto c = d1.cbegin(); c != d1.cend(); ++c)
		cout << *c << " ";
	cout << endl;

	return 0;
}