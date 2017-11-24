class a
{
    int x,y,z;
    public: void getdata (int a, int b, int c)
    {
        x=a;y=b;z=c;
    } 
    void display()
    {}
    void operator();
};
void a :: operator- ()
{
    x--;
    y--;
    z++;
}
void main()
{
    a s;
    -s;
}
