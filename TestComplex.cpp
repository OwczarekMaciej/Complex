#include "Complex.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    Complex test1(0, 2);
    Complex test2(1.5,2.13);
    Complex test3(5);
    Complex test4(4);
    Complex test5(5,4);

    cout << test2 << endl;
    
    cout << "Second amp: " << test2.calc_amp() << endl;
    cout << "Second pahse: " << test2.calc_phase() << endl;

    cout << boolalpha;
    cout << (test3 == 5) << endl;
    cout << (test4 != 5) << endl; 

    cout << "=============" << endl;
    Complex a, b;
    a = test1 + test3;
    b = 3 + test2;
    cout << a << endl;
    cout << b << endl;

    cout << "=============" << endl;
    Complex c, d;
    c = test2 - test1;
    d = test2 - 0.5;
    cout << c << endl;
    cout << d << endl;

    cout << "=============" << endl;
    Complex e;
    e = test3 * test5;
    cout << e << endl;
    e = 5 * test5;
    cout << e << endl;
    e = test5 * 5;
    cout << e << endl;

    cout << "=============" << endl;
    Complex f;
    f = test5 / test2; //2.36 - 0.685
    cout << f << endl;
    f = test5 / 5;
    cout << f << endl;
    f = 5 / test5;
    cout << f << endl;

    cout << "=============" << endl;
    Complex g(3, 3), h(4, 4), i(5, 5);
	g /= h /= i;
    cout << g << endl;
    cout << h << endl; 
    cout << i << endl;
    
    return 0;
}
