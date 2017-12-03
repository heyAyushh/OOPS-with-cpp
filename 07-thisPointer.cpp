// Refrence is Page no. 23 & 24

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
        void set_data(int num) 
        {
            this->a=num; //This pointer is used here. Note the use of this pointer with arrow operator
        }      

        void show_data()
        {
            cout<<a;
        } 
};

int main()
{
    sample s;

    int num=10;
    s.set_data(num);
    s.show_data();

    //c++ uses this pointer to represent to represent
    //the object that invoked the member function of class.
}



