// Place to put comments
#include <iostream>
using namespace std;

int main()
{
    int i = 17;
    int j = 29; // To use later

    int* p1 = &i;
    int* p2 = &j;
    cout << p1 << endl;
    cout << *p1 << endl;

    cout << p2 << endl;
    cout << *p2 << endl;
    return 0;
}
