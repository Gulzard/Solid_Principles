#include "IncomeTaxManager.h"

using namespace std;
void IncomeTaxManager::getUserDetailsFromDB(string Pan, int year)
{
	dbObj.getUserDetials(Pan, year);

}

void IncomeTaxManager::calcuateTax(string Pan, int year)
{
	int taxAmount;
	//calculate tax based in the year
	//TODO write tax calulcator and populate m_taxAmount;
	cout << "Tax calculated for the year is " << year << m_taxAmount << endl;
}

void IncomeTaxManager::submitTax(string Pan, int year)
{
	//TODO write tax submitTax for the year given year;
	cout << "Tax submitted for the year and total tax amount is: " << year << m_taxAmount << endl;
}