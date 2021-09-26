#pragma once

#include<iostream>
#include<string>

using namespace std;

class Database
{
private:
	int income;
	int expense;
	int investment;
	string gender;

public:
	Database() { cout << "Database is created" << endl; }
	void getUserDetials(string Pan, int year);

};

