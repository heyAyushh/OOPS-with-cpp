// Refrence is Page no. 33,34,35 & 36

/* =============================================================+
|   In this program we will be defining                         |
|   a class as a friend to another class                        |
+==============================================================*/

/* 
If you're using Turbo c and it's compilers Do some changes
write 
> #include<iostream.h>
and comment 
> lines 19 & 20
*/

#include <iostream>
using namespace std;

class boy 
{
    int income1;
    int income2;

    public:

        void setdata(int in1, int in2) // set's user input as value to private members
        {
            income1=in1;
            income2=in2;
        }

        friend class girl; // class girl as a friend to boy (girl can access all boy's private members)
};

class girl
{
    int income;

    public:

        int girlfunc(boy b) // This function returns the addition of both data members of object of class boy (passed as argument) 
        {
            return b.income1+b.income2;
        }

        void setdata(int in)  // set's user input as value to private members
        {
            income=in;
        }

        void show(boy b1)
        {
            cout<<"boy income = "<<b1.income1<<'\t'<<b1.income2<<endl;
            cout<<"girl's income in show() "<<income<<endl;
        }

};

int main()
{
    boy b1;
    girl g1;

    b1.setdata(500,1000);
    g1.setdata(300);
    cout<<"boy b1 total income ="<<g1.girlfunc(b1)<<endl; // sending b1 to get accessed by girl class ( as a friend ;p )
    g1.show(b1);

}
