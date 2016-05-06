#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<int> v1;
	int i;
	while(cin >> i)
		v1.push_back(i);
	for(auto c : v1)
		cout << c << " ";
	cout << endl;

	vector<string> v2;
	string word;
	while(cin >> word)
		v2.push_back(word);
	for(auto c : v2)
		cout << c << " ";
	cout << endl;

	return 0;
}