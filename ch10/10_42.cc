#include <algorithm>
using std::sort;
using std::unique;

#include <list>
using std::list;
using std::string;

#include <iostream>
using std::cout;
using std::endl;

void elimDups(list<string> &words)
{
	words.sort();
	for(auto const &c : words)
		cout << c << " ";
	cout << endl;

	words.unique();
	for(auto const &c : words)
		cout << c << " ";
	cout << endl;
}

int main()
{
	list<string> l1{"the", "quick", "red", "fox", "jumps", "over",
						"the", "slow", "red", "turtle"};
	for(auto const &c : l1)
		cout << c << " ";
	cout << endl;
	elimDups(l1);

	return 0;
}