// Refrence is Page no. 29 & 30

/* =============================================================================+
|   bridging is  done to when we need to handle to objects of distinct classes  |
|   we will be doing this using a friend function                               |
|                                                                               |
|   Here, we are adding data members of two classes                             |
|   using a bridge (friend function)                                            |
+==============================================================================*/

/* 
If you're using Turbo c and it's compilers Do some changes
write 
> #include<iostream.h>
and comment 
> lines 19 & 20
*/

#include <iostream>
using namespace std;

class two;  //Declation is done here, we will be defining it below

class one   
{
  private:
    int data1;

  public:
    void setdata(int init)
    {
        data1 = init;
    }

    friend int add_both(one a, two b); // Declation of function as friend
};

class two
{
  private:
    int data2;

  public:
    void setdata(int init)
    {
        data2 = init;
    }

    friend int add_both(one a, two b); // Declation of function as friend

};

int add_both(one a, two b) // A bridge ( a friend function which will be acting to connect two objects of different classes )
{
    return a.data1+b.data2; // returns addition of data members of class one and class two
}

int main()
{
    one a;
    two b;
    a.setdata(5);
    b.setdata(10);
    cout<<"Sum of one and two "<<add_both(a,b);

}

