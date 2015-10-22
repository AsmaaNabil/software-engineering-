#include <iostream>
using namespace std ;

class Move 
{
private:
	double x;
	double y;
public :
	Move ()
	{
		x=10;
		y=10;
	}
	void move( double a=0 , double b=0 )
	{
		cout<< " please enter the first number: " ;
		cin>>a;
		cout << endl << " please enter the second nomber: " ;
		cin>>b;
		cout<< endl ;
		x=a;
		y=b;
	}
	void showmove() const
	{
		cout<< " the currunt value of x is : " << x << endl;
		cout << " The currunt value of y is : " << y << endl<< endl;
	}
	Move add(const Move & m) const
	{ 
		Move newobject ;
		newobject.x = x + m.x  ;
		newobject.y = y + m.y  ;
		return newobject ;
	}
	void reset(double a = 0, double b = 0)
	{
		x = a ;
		y = b ;
	}
};


int main()
{
	Move c , d , f ;
	c.move();
	c.showmove();
	c=d.add(f);
	c.showmove();
	c.reset();
	c.showmove();

	return 0 ;
}
