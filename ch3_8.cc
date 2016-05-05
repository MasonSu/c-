#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<int> v1;
	int i, sum = 0;

	while(cin >> i)
		v1.push_back(i);

	for(auto c = v1.begin(); c != v1.end(); c += 2){
		if(c == v1.end() - 1){
			cout << *c;
			break;
		}
		sum = *c + *(c + 1);
		cout << sum << " ";
	}
	cout << endl;

	for(auto c = v1.begin(); c != v1.begin() + (v1.size() + 1) / 2; c++){
		if(v1.size() % 2 != 0 && c == v1.begin() + (v1.size() + 1) / 2 - 1){
			cout << *c;
			break;
		}
		sum = *c + *(v1.end() - (c - v1.begin()) - 1);
		cout << sum << " ";
	}
	cout << endl;

	return 0;
}