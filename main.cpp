#include <iostream>
#include <cmath>
using namespace std;
int main()
{
//    int a, b;
//    cin >> a >> b;
//    if (a > b) cout << "Bigger" << endl;
//    else cout << "Smaller" << endl;
//    if (a > 0 && a < 10) {
//        cout << "one to nine" << endl;
//    } else {
//        cout << "other" << endl;
//    }


//    double a, b, c;
//    cin >> a >> b >> c;
//    double d = b*b-4*a*c;
//    if (d<0) {
//        cout << "No roots" << endl;
//    } else {
//        double x1 = (-b-sqrt(d))/(2*a);
//        double x2 = (-b+sqrt(d))/(2*a);
//        cout << x1 << endl << x2 << endl;
//    }

//    int a,b,op;
//    cin >> a >> b >> op;
//    switch (op) {
//    case 1: cout << a << "+" << b << "=" << a+b << endl;
//        break;
//    case 2: cout << a << "-" << b << "=" << a-b << endl;
//        break;
//    case 3: cout << a << "*" << b << "=" << a*b << endl;
//        break;
//    case 4: cout << a << "/" << b << "=" << a/b << endl;
//        break;
//    default: cout << "Invalid input" << endl;
//    }

//    int mark;
//    cin >> mark;
//    switch (mark) {
//    case 1:
//    case 2:
//    case 3:
//        cout << "Low" << endl;
//        break;
//    case 4:
//    case 5:
//    case 6:
//        cout << "Satisfying" << endl;
//        break;
//    case 7:
//    case 8:
//    case 9:
//        cout << "Good" << endl;
//        break;
//    case 10:
//    case 11:
//    case 12:
//        cout << "Best" << endl;
//        break;
//    default:
//        cout << "Invalid input" << endl;
//    }

    int a, b;
    cin >> a >> b;
    int c = a > b ? a : b;
    cout << c << endl;
//    int c;
//    if (a>b) c = a; else c = b;
    return 0;
}