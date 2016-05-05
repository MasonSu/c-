#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string word, line;

	/*一次读取一行*/
	getline(cin, line);
	cout << line << endl;

	/*一次读取一个单词*/
	cin >> word;
	cout << word << endl;

	/*比较两个字符串是否相等*/
	string s1, s2;
	cin >> s1 >> s2;
	if(s1 == s2)
		cout << "two strings are same" << endl;
	else
		cout << ((s1 > s2) ? s1 : s2) << " is bigger" << endl;

	/*比较两个字符串长度*/
	if(s1.size() == s2.size())
		cout << "two strings have the same length" << endl;
	else
		cout << ((s1.size() > s2.size()) ? s1 : s2) << " is longer" << endl;

	/*拼接字符串*/
	string s3, s4;
	while(cin >> s3)
		s4 += s3;

	cout << s4 << endl;

	return 0;
}