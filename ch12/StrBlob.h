#ifndef STRBLOB_H
#define STRBLOB_H

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <initializer_list>

class StrBlob{
public:
	typedef std::vector<std::string>::size_type size_type;

	StrBlob();
	StrBlob(std::initializer_list<std::string> il);

	size_type size() const {return data->size();}
	bool empty() const {return data->empty();}
	void print(std::ostream &os);

	std::string &front();
	std::string &front() const;
	std::string &back();
	std::string &back() const;

	void push_back(const std::string &t) {data->push_back(t);}
	void pop_back();
private:
	std::shared_ptr<std::vector<std::string>> data;
	void check(size_type i, const std::string &msg) const;
};

#endif