#include <iostream>
#include "StrBlob.h"

using std::cout;
using std::endl;

int main()
{
	std::initializer_list<std::string> li{"aaa", "bbb", "ccc"};
	StrBlob str(li);
	//const StrBlob str(li);
	cout << "The size is " << str.size() << endl;
	
	str.push_back("ddd");
	str.print(cout);
	cout << endl;

	str.pop_back();
	str.print(cout);
	cout << endl;
	
	cout << "The first element is " << str.front() << endl;
	cout << "The last element is " << str.back() << endl;

	return 0;
}