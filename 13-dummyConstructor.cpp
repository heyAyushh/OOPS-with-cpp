// Refrence is Page no. 40

/* ==========================================================================+
|   Whenever we create an object of a class with no constructor specified    |
|   the class automatically calls the constructor (dummy) and                |
|   initialises the data members with garbage values                         |
+===========================================================================*/

/* 
If you're using Turbo c and it's compilers Do some changes
write 
> #include<iostream.h>
and comment 
> lines 11 & 12
*/

#include <iostream>
using namespace std;

class sample{

    private:
        int a;
    
    public:

        void show()
        {
            cout<<a;
        }
};

int main()
{
    sample s; // creating an object calls an constructor (dummy) which initialises the data member as Garbage values

    s.show();
    
}
