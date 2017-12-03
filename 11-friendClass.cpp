// Refrence is Page no. 32 & 33

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

class alpha 
{
    int alpha_data;

    public:

        alpha()
        {
            alpha_data=0;
        }

        alpha(int d)
        {
            alpha_data=d;
        }

        void show()
        {
            cout<<"value of alpha_data "<<alpha_data<<endl;
        }

        friend class beta; // class beta as a friend to alpha (beta can access all alpha's private members)
};

class beta
{
    int beta_data;

    public:

        beta()
        {
            beta_data=0;
        }

        void show(alpha a)  // This is a function to access alpha objects
        {
            cout<<"value of alpha_data accessing from class beta "<<a.alpha_data<<endl; // can access alpha's private members as beta is a friend of alpha
        }

};

int main()
{
    alpha a(786);

    beta b;
    a.show;
    b.show(a); // passes an alpha object to beta's show function

    return 0;
}
