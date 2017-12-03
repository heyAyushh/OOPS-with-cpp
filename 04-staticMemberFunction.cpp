// Refrence is Page no. 16 & 17

/* 
If you're using Turbo c and it's compilers Do some changes
write 
> #include<iostream.h>
and comment 
> lines 11 & 12
*/

#include <iostream>
using namespace std;

class ID_generator{

    private:
        static int next_ID; // This is a static data member
    
    public:
        static void genNextId() //This is a static function , It prints then increments the next_ID data member
        {
            cout<<"Next ID= "<<next_ID++<<endl;
        }       
};

int ID_generator::next_ID = 1;

int main()
{

    for(int i=0; i<5; i++)
    {
        ID_generator::genNextId(); //This calls the static member function in the class

    }
    

    //at the end of the program the value of next_ID is 6
    //A static data member is shared with all of it's objects
    //A static function doesn't require any objects to be created or initialised
}



