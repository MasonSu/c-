#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1;

	/*将字符串中的字符替换为X*/
	cin >> s1;
	for(auto &c : s1)
		c = 'X';
	cout << s1 << endl;

	/*去除字符串中的标点符号*/
	string s2;
	cin >> s2;
	for(auto c : s2)
		if(!ispunct(c))
			cout << c;
	cout << endl;

	return 0;
}