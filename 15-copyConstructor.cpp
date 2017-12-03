// Refrence is Page no. 43

/* ==========================================================================+
|  copy constructor                                                           |
|   takes an object of class as an argument and copies data values of members |
|                                                                             |
|   It takes a refrence to an object of same class as an argument             |        
|   > Constructor here is demonstrated as we created two constructors         |
|       with same names and with different arguments                          | 
|                                                                             |
+===========================================================================*/

/* 
If you're using Turbo c and it's compilers Do some changes
write 
> #include<iostream.h>
and comment 
> lines 19 & 20
*/

#include <iostream>
using namespace std;

class numbers{

    private:
        int x;
    
    public:
        numbers(numbers &n) // This is a Copy constructor taking an Refrence to an object of same class
        {
            x=n.x;
            cout<<"I am a copy constructor \n";
        }

        numbers(int i)  // This is a Pararmeterised constructor taking an arguemt to initialise 
        {
            x=i;
            cout<<"I am a Pararmeterised constructor \n";
        }

        void show_data()
        {
            cout<<"\n x= "<<x;
        }
};

int main()
{
    numbers n1(20); // Creating this object calls Pararmeterised constructor

    numbers n2(n1); // Creating this object calls Copy constructor
    n2.show_data();

    numbers n3=n1;  // Creating this object calls Copy constructor
    n3.show_data();

    n3.show_data();
    
}
