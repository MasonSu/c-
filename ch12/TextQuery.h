#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include <memory>
#include <fstream>
#include <map>
#include <set>
#include <vector>

class TextQuery{
//friend class QueryResult;
public:
	TextQuery(std::ifstream &infile);
	void query(std::string str);
	void print(std::ostream &os, std::string str);	
private:
	std::shared_ptr<std::vector<std::string>> data;
	std::shared_ptr<std::map<std::string, std::set<int>>> result;
};

#endif