#include <iostream>
#include <fstream>
#include <sstream>
#include "TextQuery.h"
//#include "QueryResult.h"

using std::vector;
using std::string;
using std::map;
using std::set;
using std::cout;
using std::endl;

TextQuery::TextQuery(std::ifstream &infile)
{
	data = std::make_shared<vector<string>> ();
	result = std::make_shared<map<string, set<int>>> ();
	string line;
	while(getline(infile, line))
		data->push_back(line);
}

void TextQuery::query(string word)
{
	set<int> linenum;
	
	//QueryResult res;
	for(auto iter = data->cbegin(); iter != data->cend(); ++iter){
		std::istringstream record(*iter);
		string element;
		while(record >> element){
			if(element == word)
				linenum.insert(iter - data->cbegin() + 1);  //插入单词所在的行号
		}
	}
	result->insert(make_pair(word, linenum));  //将单词和它对应的行号插入到map中

}

void TextQuery::print(std::ostream &os, string word)
{
	auto iter = result->find(word); 
	if(iter != result->end()){
		int num = iter->second.size();
		cout << iter->first << " occurs " << num << 
				(num > 1 ? " times": " time") << endl;

		for(auto c = iter->second.begin(); c != iter->second.end(); ++c){
			cout << "\t(line " << *c << ") " <<
				 (*data)[*c - 1] << endl;
		}
	}
}
						