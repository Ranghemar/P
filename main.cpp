// Place to put comments
#include <iostream>
using namespace std;

int main()
{
    int i = 17;
    int j = 29; // After removing too much branches from depo

    int* p1 = &i;
    int* p2 = &j;
    cout << p1 << endl;
    cout << *p1 << endl;

    cout << p2 << endl;
    cout << *p2 << endl; // Just to check remote settings
    return 0;
}
