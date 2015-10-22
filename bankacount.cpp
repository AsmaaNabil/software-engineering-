#include <iostream>
#include <string>
using namespace std ;

class BankAcount 
{
  private :
   string  name ;
   string number;
   double  balance;
  public :
	 void NewAcount(string n , double b )
	 {
		 name=n ; 
	     balance=b ;
	 }
	 void display ()
	 { 
		 cout<< " The depositer's name is "<< name << endl ;
		 cout<< " The acount number is "<< number << endl ;
		 cout<< " The balance is " << balance << endl<< endl ;
	 }
	 void deposite ()
	 {
		 double amount ;
		 cout<< " Please enter your amount to deposite : "<< endl;
		 cin>> amount ;
		 cout<< endl;
		 balance = balance + amount ;
	 }
	 void withdraw()
	 {
		 double amount;
		 cout<< " Please enter your amount to withdraw : "<< endl;
		 cin>> amount ;
		 cout<<endl;
		 if ( balance >= amount )
			 balance -= amount ;
		 else 
			 cout<< " Error " << endl<< endl ;
	 }
};
  
int main () 
{
	BankAcount b1 ;
	b1.NewAcount("Ahmed" , 10000 );
	b1.display();
	b1.deposite();
	b1.display();
	b1.withdraw();
	b1.display();
	return 0 ;
}








