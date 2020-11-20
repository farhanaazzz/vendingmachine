#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
#include <chrono>
#include <math.h>
	
using namespace std;
	
int main ()
{
float userMoney;
int d1 = 0;
int d2 = 0;
int d3 = 0;
int d4 = 0;
int swap = 0;
string userChoice;
float price;
float topup;
float balance;
float currency;
float newuserMoney;
int start_s = clock ();
		
cout << "Hello, welcome to Intelligent Vending Machine " << endl;
//current date/time based on current system
time_t now = time (0);
//convert now to string form
char* dt = ctime(&now);

cout << "Date and time : " << dt << endl;
	
cout << "Amount of money deposited must not be more than RM 55.30 " << endl;
cout << "Amount of money : RM " ;
cin >> userMoney;
	
cout << "Enter name of item, choose from the following : InstantNoodle, IcedChocolate, CornBread, Bento, CocaCola, OrangeJuice " << endl;
cin >> userChoice;
	
	//generate random number not more than 55.30
	
srand((unsigned)time(0));
price = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/55.30));
cout << "Price of item is : RM " ;
cout << setprecision (2) << fixed << price << endl;
	
//check if userMoney is sufficient enough to purchase the item
if ( userMoney < price )
	{
	 cout << "Please top up your money " << endl;
	 cin >> topup;
     userMoney = userMoney + topup;
	cout << "Amount of money : RM " << setprecision (2) << fixed << userMoney << endl;
		
	}
	
		balance = userMoney - price;
		cout << "Your balance is : RM " << setprecision (2) << fixed << balance << endl;	

	cout << "Choose the currency exchange rate you would like to display from the following : 1 - Japanese Yen, 2 - BangladeshTaka : " << endl;
	cin >> currency;
		
		if ( currency == 1  )
		{
			cout << "1 MYR = 27. 54 Yen " << endl;
			price = price + 27.54;
		    cout << "Price of item is : Yen  " << price << endl;
			newuserMoney = userMoney + price;
		    balance = newuserMoney - price;
			cout << "Your balance : Yen " << balance << endl;
		
		}
		
		else if ( currency == 2 )
		{
			cout << "1 MYR = 19. 88 BDT " << endl;
			price = price + 19.88;
			cout << "Price of item is : BDT " << price << endl;
			newuserMoney = userMoney + price;
			balance = newuserMoney - price;
			cout << "Your balance is : BDT " << balance << endl;
			
		}
		
		//generatesecretcodefromfourdigitnumber
		
	cout << "Enter 1st digit : " ;
	cin >> d1;
	cout << "Enter 2nd digit : " ;
	cin >> d2;
	cout << "Enter 3rd digit : " ;
	cin >> d3;
	cout << "Enter 4th digit : " ;
	cin >> d4;
	
	if ( d1 % 2 == 0 )
	{
		d1 = d1 + 11;
		d1 = d1 % 10;
		
	}
	else
	{
		d1 = d1 + 7;
		d1 = d1 % 10;
		
	}
	
	if ( d2 % 2 == 0 )
	{
		d2 = d2 + 11;
		d2 = d2 % 10;
		
	}
	else
	{
		d2 = d2 + 7;
		d2 = d2 % 10;
		
	}
	
	if ( d3 % 2 == 0)
	{
		d3 = d3 + 11;
		d3 = d3 % 10;
		
	}
	else
	{
		d3 = d3 + 7;
		d3 = d3 % 10;
		
	}

	if ( d4 % 2 == 0 )
	{
		d4 = d4 + 11;
		d4 = d4 % 10;
		
	}
	else
	{
		d4 = d4 + 7;
		d4 = d4 % 10;
		
	}
	
	swap = d1;
	d1 = d4;
	d4 = swap;
	
	swap = d2;
	d2 = d3;
	d3 = swap;
	
	cout << "Your secret code is : " << d1 << d2 << d3 << d4 << endl;
	
	cout << "Thank you for using! Have a nice day! " << endl; 
	
	int stop_s = clock ();
	
	cout << "Duration of transaction : " << (stop_s - start_s) / double (CLOCKS_PER_SEC) << endl;
	
	return 0;
	
}

