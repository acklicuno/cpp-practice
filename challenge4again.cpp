// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>
using namespace std;

int main(){
	const int val_dollars{100}, val_quarters{25}, val_dimes{10}, val_nickels{5}, val_pennies{1};
	int dollars, quarters, dimes, nickels, pennies,total_amount,remainder;

	cout<<"Enter the amount of cents you would like to convert."<<endl;
	cin>>total_amount;

	dollars = total_amount / val_dollars;
	remainder = total_amount % val_dollars;

	quarters = remainder / val_quarters;
	remainder = remainder % val_quarters;

	dimes = remainder / val_dimes;
	remainder = remainder % val_dimes;

	nickels = remainder / val_nickels;
	remainder = remainder % val_nickels;

	pennies = remainder / val_pennies;
	remainder = remainder % val_pennies;

	cout<<"Your dollar amount:"<<dollars<<endl<<"Your quarter amount:"<< quarters <<endl<<"Your dime amount:"<<dimes<<endl<<"Your nickel amount:"<<nickels<<endl<<
	"Your pennies amount:"<< pennies<<endl;

}
