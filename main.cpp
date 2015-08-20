// Place to put comments
#include <iostream>
using namespace std;

int main()
{
    int i = 17;
    int j = 29;
	int k = 33;// After removing too much branches from depo

    int* p1 = &i;
    int* p2 = &j;
    cout << p1 << endl;
    cout << *p1 << endl;
	cout << "\n" << endl;

    cout << p2 << endl;
    cout << p2 << "   " << *p2 << endl; // Just to check remote settings
	
	int* p3 = p1;
	cout << p3 << "\n" << endl;
	cout << *p3 << endl;
	
	*p1 = 103;
	cout << "New i = " << i << endl;
	
	p2 = &i;
	cout << p2 << "    " << i << endl;
	
    return 0;
}
