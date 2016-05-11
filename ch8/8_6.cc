#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Sales_data.h"

using std::cout;
using std::cerr;
using std::endl;
using std::ifstream;
using std::ofstream;

int main(int argc, char **argv)
{
	if(argc != 3){
		cerr << "argc is not enough!" << endl;
		exit(EXIT_FAILURE);
	}

	Sales_data total;
	ifstream input(argv[1]);
	ofstream output(argv[2], ofstream::app);
	if(input){
		if(read(input, total)){
			Sales_data trans;
			while(read(input, trans)){
				if(total.isbn() == trans.isbn())
					total.combine(trans);
				else{
					print(output, total) << endl;
					total = trans;
				}
			}
			print(output, total) << endl;
		}else{
			cerr << "No data?!" << endl;
		}
	}else{
		cerr << "can't open: " << std::string(argv[1]) << endl;
	}

	return 0;
}