class complex
{
    float x,y;
    public: complex()
    {
        x=0;
        y=0;
    }

    complex( int a, int b)
    {
        x=a;
        x=b;
    }

    complex operator + (complex c);

    void display()
    {
        cout<<x<<"+i"<<y<<endl;
    }

};

complex complex::operator + (cpmplex c)
{
    complex temp;
    temp.x= x+c.x;
    temp.y=y+c.y;
    return(temp);
}

void main()
{
    complex c1, c2, c3;
    c1= complex(2.5,3.5);
    c2= complex(1.6,2.7);
    c3= c1+c2;
    
}
