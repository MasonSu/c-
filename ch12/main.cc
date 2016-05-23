#include <iostream>
#include <fstream>
#include "TextQuery.h"

using std::cout;
using std::endl;
using std::cin;


void runQueries(std::ifstream &infile)
{
	TextQuery tq(infile);    //保存文件并建立查询map
	while(true){
		cout << "Enter word to look for, or q to quit: ";
		std::string s;
		if(!(cin >> s) || s == "q")
			break;
		tq.query(s);
		//print(cout, tq.query(s)) << endl;
		tq.print(cout, s);
	}
}

int main(int argc, char **argv)
{
	if(argc != 2)	
		throw std::runtime_error("Argc must be two!");
	std::ifstream input(argv[1]);
	runQueries(input);

	return 0;
}