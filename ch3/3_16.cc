#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	 vector<string> v1;
	 string s1;

	 while(cin >> s1) 
	 	v1.push_back(s1);

	 for(decltype(v1.size()) i = 0; i != v1.size(); i++){
	 	for(auto &c : v1[i]){
	 		c = toupper(c);
	 		cout << c;
	 	}
	 	cout << endl;
	 }

	 return 0;
}