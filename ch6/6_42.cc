#include <iostream>

using std::string;

string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
	return (ctr > 1) ? word + ending : word;
}

int main()
{
	size_t ctn = 1;
	std::cout << make_plural(ctn, "success") << std::endl;
	std::cout << make_plural(ctn, "failure") << std::endl;

	ctn = 2;
	std::cout << make_plural(ctn, "success", "es") << std::endl;
	std::cout << make_plural(ctn, "failure") << std::endl;

	return 0;
}