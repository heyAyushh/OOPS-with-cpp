// Refrence is Page no. 40, 41, 42 & 47

/* ==========================================================================+
|  Default and Pararmeterised constructor                                    |
|   constructor overloading                                                  |
|                                                                            |
|   > Default constructor takes no arguments                                 |
|                                                                            |
|   > Pararmeterised constructor takes some arguments                        |
|       which must me passed at the time of creating an object of the class  |
|                                                                            |
|   > Constructor here is demonstrated as we created two constructors        |
|       with same names and with different arguments                         |
|                                                                            |
+===========================================================================*/

/* 
If you're using Turbo c and it's compilers Do some changes
write 
> #include<iostream.h>
and comment 
> lines 21 & 22
*/

#include <iostream>
using namespace std;

class example{

    private:
        int a;
        int b;
    
    public:
        example()
        {
            a=10;
            b=20;
            cout<<"I am a default constructor \n";
        }

        example(int x, int y)
        {
            a=x;
            b=y;
            cout<<"I am a Pararmeterised constructor \n";
        }

        void display()
        {
            cout<<"Values a="<<a<<" b="<<b;
        }
};

int main()
{
    example object1;

    object1.display();

    example object2(10,20);

    object2.display();
    
}
