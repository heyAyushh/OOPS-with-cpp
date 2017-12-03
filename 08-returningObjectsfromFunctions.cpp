// Refrence is Page no. 24, 25 & 26

/* =============================================================+
|   Here we are going to add two complex numbers                |
|   using class complex as a datatype (derived)                 |
+==============================================================*/

/* 
If you're using Turbo c and it's compilers Do some changes
write 
> #include<iostream.h>
> #include<math,h>
and comment 
> lines 17,18 & 19
*/

#include <iostream>
#include <math.h>
using namespace std;

class complex{

    private:
        float real;
        float imaginary;
    
    public:
        void getdata() // This function stores user input to data members
        {
            cout<<"\nEnter real part ";
            cin>>real;
            cout<<"\nEnter imaginary part ";
            cin>>imaginary;
        }      

        void outdata(char *msg) // This function shows a msg ( passed at the time of calling function, argument), as well as data members
        {
            cout<<msg<<real;
            if(imaginary<0)
            {
                cout<<"-i";
            }
            else
            {
                cout<<"+i";
            }
            cout<<fabs(imaginary)<<endl; // fabs function returns absolute value of a number
        }

        complex add (complex c);// Declaration of 
};

complex complex::add (complex c) // This is a function which has return type as class complex, and has arguments as objects of complex datatype
{
    complex temp; // creating a temporary object to return the values of real and imaginary
    temp.real=this->real+c.real; // adding real of the object who called the function and real of the object passed as argument
    temp.imaginary=imaginary+c.imaginary; // adding imaginary of the object who called the function and imaginary of the object passed as argument
    return temp; // return the added value of real and imaginary wrapped up in object temp of class complex
}

int main()
{

    complex c1,c2,c3;
    
    cout<<"\n Enter complex number one - \n";
    c1.getdata();

    cout<<"\n Enter complex number two - \n";
    c2.getdata();

    c3=c1.add(c2); // add c1 and c2 and assign vales to c3

    c3.outdata(" c3 = c1 + c2 : ");

}



