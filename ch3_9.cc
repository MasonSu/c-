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
	vector<unsigned> scores(11, 0);
	unsigned grade;

	while(cin >> grade){
		if(grade <= 100)
			(*(scores.begin() + grade / 10))++;
	}

	for(auto c :scores)
		cout << c << " ";
	cout << endl;

	return 0;
}