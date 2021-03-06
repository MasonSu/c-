#include <iostream>
#include <vector>

using std::vector;

bool findvalue(vector<int>::iterator start, vector<int>::iterator end, int value)
{
	for(auto c = start; c != end; ++c)
		if(*c == value)
			return true;
	return false;
}

int main()
{
	vector<int> v1{1, 3, 8, 9, 5};
	if(findvalue(v1.begin(), v1.end(), 8))
		std::cout << "find the value!" << std::endl;
	else
		std::cout << "not found!" << std::endl;

	return 0;
}