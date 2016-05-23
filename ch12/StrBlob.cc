#include <iostream>
#include <stdexcept>
#include "StrBlob.h"

using std::vector;
using std::string;

StrBlob::StrBlob(): data(std::make_shared<vector<string>> ()) {}
StrBlob::StrBlob(std::initializer_list<string> il):
				data(std::make_shared<vector<string>>(il)) {}

void StrBlob::check(size_type i, const string &msg) const
{
	if(i >= data->size())
		throw std::out_of_range(msg);
}

string &StrBlob::front()
{
	check(0, "front on empty StrBlob");
	return data->front();
}

string &StrBlob::front() const
{
	check(0, "front on empty StrBlob");
	return data->front();
}

string &StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}

string &StrBlob::back() const
{
	check(0, "back on empty StrBlob");
	return data->back();
}

void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

void StrBlob::print(std::ostream &os)
{
	for(auto iter = data->cbegin(); iter != data->cend(); ++iter)
		os << *iter << " ";
}