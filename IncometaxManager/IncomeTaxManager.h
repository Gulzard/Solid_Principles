#pragma once

#include"Database.h"
#include"string"

using namespace std;
class IncomeTaxManager
{
private:
	Database  dbObj;
	string m_pan;
	int m_year;
	int m_taxAmount;

public:
	IncomeTaxManager() { 
		
		Database  *dbObj = new Database;
		cout << "IncomeTaxManager is created" << endl; 
	}
 void getUserDetailsFromDB(string Pan, int year);

 void calcuateTax(string Pan, int year);
 
 void submitTax(string Pan, int year);

};

