/* If you're using Turbo c and it's compilers Do some changes
write 
> #include<iostream.h>
and comment 
> lines 10 & 11
Also this program is demonstarted 
on page no. 2 & 3 in the attached pdf 
 */

#include <iostream>
using namespace std;

class rectangle
{
  private:
    float length;
    float breadth;

  public:
    // Member function inside the class
    void getdata() //function to get values from user and initialise it to private data members
    {
        cout << "enter length and breadth " << '\n';
        cin >> length >> breadth;
    }

    void putdata()
    {
        cout << length << breadth;
    }

    float area(void);
};

// Member function outside the class
float rectangle::area(void) // is done using :: (scope resolution operator)
{
    return length * breadth;
}

//Driver function
int main()
{
    rectangle r1; //creating object Page no. 4 
    r1.getdata(); //accessing inline function @line12 Page no. 5
    cout << "Area of the rectangle is" << r1.area()<<endl;
    r1.putdata();
}