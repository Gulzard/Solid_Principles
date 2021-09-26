#include<iostream>
#include"IncomeTaxManager.h"


using namespace std;

int main()
{
	string Pan = "xyz123";
	int year = 2021;
	IncomeTaxManager *manager = new IncomeTaxManager( );

	//get user details from pan card;
	manager->getUserDetailsFromDB(Pan, year);


	//calculate tax based on the year
	manager->calcuateTax(Pan, year);
	

	//submit tax 
	manager->submitTax(Pan, year);



	return 0;

}