#include<iostream.h>
#include<conio.h>

void main()
{
    clrscr ();

    int ch ;
    float a, b;

    cout<< "Enter two numbers";

    cin >> a >> b;

    cout << "MENU\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter choice";
    cin >> ch ;

    if (ch==1)
    {
     cout << a+b;
    }

    else if (ch==2)
    {
     cout << a-b;
    }

    else if (ch==3)
    {
     cout << a*b;
    }

    else if (ch==4)
    {
     cout << a/b;
    }
    else
    {
      cout << "Sorry";
    }

    getch ();
}