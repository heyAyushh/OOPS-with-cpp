// Refrence is Page no. 18 & 19

/* 
If you're using Turbo c and it's compilers Do some changes
write 
> #include<iostream.h>
and comment 
> lines 13 & 14
*/

// Static initalise all the variables to zero instead of making an constructor for it 

#include <iostream>
using namespace std;

class sample{

    private:
        int a;
        int b;
    
    public:
        void show_data() //This function prints count then increments it ( postfix increment )
        {
            cout<<"a= "<<a<<"b= "<<b<<endl;
        }
        void add()
        {
            a+=10;
            b+=20;
        }       
};

int main()
{
    static sample s; //Made a object static. Static initialises all the data member of the object as zero

    s.show_data(); 
    s.add();
    s.show_data();

}



