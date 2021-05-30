#include<iostream.h>
#include<conio.h>

void main()
{
    clrscr ();
    // read a number
    // check if its less than 10
    // display 1 if its less than 10
    // display 2 otherwis
    int a ;
    cin >> a ;

    if (a<10)
    {
	cout << "1" ;
    }
    else if(a==10)
    {
	cout<< ":P";
    }
    else
    {
	cout << "2";
    }

    getch ();
}