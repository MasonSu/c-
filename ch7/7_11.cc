#include <iostream>
#include "Sales_data.h"

using std::cout;
using std::endl;

int main()
{
	Sales_data item1;
	print(cout, item1) << endl;

	Sales_data item2("978-3-16-148410-0");
	print(cout, item2) << endl;

	Sales_data item3("978-3-16-148410-0", 3, 20);
	print(cout, item3) << endl;

	Sales_data item4(std::cin);
	print(cout, item4) << endl;

	return 0;
}