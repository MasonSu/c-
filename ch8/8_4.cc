#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

using std::cout;
using std::endl;
using std::vector;
using std::string;

void process(std::ifstream &is)
{
	vector<string> v1;
	string s1;
	while(getline(is, s1))
		v1.push_back(s1);

	for(auto &c : v1){
		cout << c << endl;
	}
}

int main(int argc, char **argv)
{
	if(argc != 2){
		std::cerr << "argc is not enough!" << endl;
		exit(EXIT_FAILURE);
	}
	
	std::ifstream input(argv[1]);
	if(input){
		process(input);
	}else
		std::cerr << "couldn't open: " + string(argv[1]) << endl;

	return 0;

}