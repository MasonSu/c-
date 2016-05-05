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
	vector<int> v1;
	int i;

	while(cin >> i)
		v1.push_back(i); 

	for(auto c = v1.begin(); c != v1.end(); c++){
		*c *= 2;
		cout << *c << " ";
	}
	cout << endl;

	return 0;

}