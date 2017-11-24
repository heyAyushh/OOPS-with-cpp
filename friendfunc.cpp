class sample
{
    int a,b;
public: void setdata()
{
    a=25;
    b=20;
}

friend float mean( sample s);
}

float mean (sample s)
{
    return ( (s.a+s.b ) /2);
}
