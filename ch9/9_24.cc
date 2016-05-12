#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main()
{
	std::vector<int> v1{1, 9};
	if(!v1.empty()){
		cout << *v1.begin() << endl;
		cout << v1.front() << endl;
		cout << v1[0] << endl;
		cout << v1.at(0) << endl;
	}else{
		std::cerr << "Error: vector is empty!" << endl;
	}
	
	return 0;
}