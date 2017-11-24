int obj;
int aliveobj;

class abc
{
    public : abc()
            {
                ++obj;
                ++aliveobj;
            }

            ~abc()
            {
                --aliveobj;
            }
};

void show()
{
    cout<<"total no. of objets"<<obj;
    std::cout << "total no. of alive objects" << '\n';
}

int main()
{
    abc obj1;
    obj1.show();
    {
        abc obj2, obj3;
        obj3.show();
    }
    obj1.show();
    abc x,y;
    y.show();

}
