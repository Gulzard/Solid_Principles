#include "Database.h"
#include<iostream>
#include"Database.h"


void Database::getUserDetials(string Pan, int year)
{
	income = searc_db(Income, year);
	expense = searc_db(expense, year);
	investment = searc_db(investment, year);
	gender = searc_db(gender, year);
}



