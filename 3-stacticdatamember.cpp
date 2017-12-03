// Refrence is Page no. 14

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
        static int count; // This is a static data member
    
    public:
        void show_count() //This function prints count then increments it ( postfix increment )
        {
            cout<<"Count "<<count++<<endl;
        }       
};

int sample::count = 1;

int main()
{
    sample s1,s2,s3;

    s1.show_count();
    s2.show_count();
    s3.show_count();
    
    //at the end of the program the value of count is 4
    //A static data member is shared with all of it's objects
}



