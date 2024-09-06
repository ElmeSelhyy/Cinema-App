#ifndef USER_HPP
#define USER_HPP
#include <iostream>
#include <string>
#include <vector>

#include "Movie.hpp"

using namespace std;

class CustomerC
{
public:
	CustomerC(const string &name, const string &mail, string phoneNum) : m_name(name), m_mail(mail), m_phoneNum(phoneNum)
	{
	}
	const string &GetMail() const { return m_mail; }
	void ChangePhoneNumber(string phoneNum) { m_phoneNum = phoneNum; }
	const string &GetPhoneNum() const { return m_phoneNum; }
	void AddMovie(const MovieC &movie) { m_history.emplace_back(movie); }
	const vector<MovieC> &GetHistory() const { return m_history; }
	const string &GetName() const { return m_name; }
	void printHistory() const;

private:
	vector<MovieC> m_history;
	string m_mail;
	string m_phoneNum;
	string m_name;
};
#endif
