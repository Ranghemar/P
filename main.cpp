#include <iostream>
using namespace std;
int main()
{
   int i=17;
   int j=29;

   int* p1 =&i;
   cout << p1 << endl;
   cout << *p1 << endl;

   *p1 = 103;
cout << i << endl;

	return 0;
}
