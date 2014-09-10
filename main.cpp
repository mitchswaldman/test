#include <iostream>

using namespace std;

class test
{
private:
    double x;
    double y;

public:
   test(double a,double b);
   void multCalc();
   void testAdd();
};

int main()
{
    test product(3,6);
    product.multCalc();
    product.testAdd();

    return 0;
}

test::test(double a,double b)
{
    x = a;
    y = b;
}

void test::multCalc()
{
    cout << x * y << endl;
}

void test::testAdd()
{
    cout << x + y << endl;
}
