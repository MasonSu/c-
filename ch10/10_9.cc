#include <algorithm>
using std::sort;
using std::unique;

#include <vector>
using std::vector;
using std::string;

#include <iostream>
using std::cout;
using std::endl;

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	for(auto const &c : words)
		cout << c << " ";
	cout << endl;

	auto end_unique = unique(words.begin(), words.end());
	for(auto const &c : words)
		cout << c << " ";
	cout << endl;

	words.erase(end_unique, words.end());
	for(auto const &c : words)
		cout << c << " ";
	cout << endl;
}

int main()
{
	vector<string> v1{"the", "quick", "red", "fox", "jumps", "over",
						"the", "slow", "red", "turtle"};
	for(auto const &c : v1)
		cout << c << " ";
	cout << endl;
	
	elimDups(v1);

	return 0;
}