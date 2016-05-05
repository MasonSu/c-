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

	for(decltype(v1.size()) i = 0; i != v1.size(); i += 2){
		if(i == v1.size() - 1){
			cout << v1[i];
			break;
		}
		sum = v1[i] + v1[i + 1];
		cout << sum << " ";
	}
	cout << endl;

	for(decltype(v1.size()) i = 0; i != (v1.size() + 1) / 2; i++){
		if(v1.size() % 2 != 0 && i == (v1.size() + 1) / 2 - 1){
			cout << v1[i];
			break;
		}
		sum = v1[i] + v1[v1.size() - i -1];
		cout << sum << " ";
	}
	cout << endl;

	return 0;
}