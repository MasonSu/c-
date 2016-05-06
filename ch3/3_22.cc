#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> text;
	string s1;

	while(getline(cin, s1))
		text.push_back(s1);
	cout << "text size: " << text.size() << endl;

	for(auto it = text.begin(); it != text.end() && !it->empty(); it++){
		for(auto &c : *it){
			c = toupper(c);
			cout << c;
		}
		cout << endl;
	}

	return 0;
}