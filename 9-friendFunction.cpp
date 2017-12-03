// Refrence is Page no. 28 & 29

/* ============================================================+
|   Here we are going to use a friend function to              |
|   find mean of two values                                    |
+==============================================================*/

/* 
If you're using Turbo c and it's compilers Do some changes
write 
> #include<iostream.h>
and comment 
> lines 16 & 17
*/

#include<iostream>
using namespace std;

class base
{
    int val1, val2;

    public:
        void get()
        {
            cout<<"\n Enter two values ";
            cin>>val1>>val2;
        }

        friend float mean(base ob);

};

float mean(base ob)
{
    return (float)(ob.val1 + ob.val2)/2;
}

int main()
{
    base obj;
    obj.get();
    cout<<"\n mean value is :"<<mean(obj);
}