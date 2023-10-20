#include "Complex.h"
#include <iostream>
#include <iomanip>

using namespace std;

// testing creating complex numbers and getting their phase and amplitude
void test1()
{
    cout << "=============" << endl;
    Complex test1(0, 2);
    Complex test2(1.5, 2.13);
    Complex test3(5);

    cout << test1 << endl;
    cout << test2 << endl;
    cout << test3 << endl;
    cout << "Second amp: " << test2.calc_amp() << endl;
    cout << "Second pahse: " << test2.calc_phase() << endl;
}

// bool comparison
void test2()
{
    cout << "=============" << endl;
    Complex test3(4);
    cout << boolalpha;
    cout << (test3 == 4) << endl;
    cout << (test3 != 5) << endl;
}

// add and substract
void test3()
{
    cout << "++++++++++++++" << endl;
    Complex test1(5, 4);
    Complex test2(3, 2);
    Complex a, b;
    a = test1 + test2;
    b = 3 + test2;
    cout << a << endl;
    cout << b << endl;

    cout << "----------------" << endl;
    Complex c, d;
    c = test1 - test2;
    d = test2 - 0.5;
    cout << c << endl;
    cout << d << endl;
}

// multiply and divide
void test4()
{
    cout << "*************" << endl;
    Complex test1(6, 7);
    Complex test2(1, 2);
    Complex e;
    e = test1 * test2;
    cout << e << endl;
    e = 5 * test1;
    cout << e << endl;
    e = test1 * 5;
    cout << e << endl;

    cout << "--------------" << endl;
    Complex f;
    f = test1 / test2;
    cout << f << endl;
    f = test1 / 5;
    cout << f << endl;
    f = 5 / test1;
    cout << f << endl;
}

// check += -= *= /=
void test5()
{
    cout << "????????????" << endl;
    Complex g(3, 3), h(4, 4), i(5, 5);
    g /= h /= i;
    cout << g << endl;
    cout << h << endl;
    cout << i << endl;
}
int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();

    return 0;
}
