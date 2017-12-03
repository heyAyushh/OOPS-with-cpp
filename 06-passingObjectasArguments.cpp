// Refrence is Page no. 21 & 22

/* 
If you're using Turbo c and it's compilers Do some changes
write 
> #include<iostream.h>
and comment 
> lines 11 & 12
*/

#include <iostream>
using namespace std;

class myclass{

    private:
         int num;
    
    public:
        void get_data() //This function asks user for input and then initilaises the 
        {
            cout<<"Enter a number ";
            cin>>num;
        }

        void set_data(myclass o2)  
        {
            num=o2.num;
        }

        void set_data(myclass *o2)
        {
            num=o2->num;
        }

        void set_data(int a, myclass &o2)
        {
            num=o2.num;
        }

        void show_data()
        {
            cout<<"\n Num = "<<num;
        }

};

int main()
{
    myclass o1,o2,o3,o4,o5;
    int a=0;

    o2.get_data();
    o1.set_data(o2);
    o3.set_data(&o2);
    o4.set_data(a,o2);

    o1.show_data();
    o2.show_data();
    o3.show_data();

}



