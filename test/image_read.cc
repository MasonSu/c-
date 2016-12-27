#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
  ifstream input("beauty.jpg", ios::binary);

  ostringstream ostrm;
  ostrm << input.rdbuf();
  
  string image(ostrm.str());

  ofstream output("woman.jpg", ios::binary);
  output << image;

  return 0;
}
