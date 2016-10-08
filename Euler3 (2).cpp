#include <iostream>
#include<stdlib.h>
#include <fstream>
using namespace std;
int main()
{	int x,sagot;
	 ifstream f("sample.txt"); 
    while (f >> x) {
    for ( int i = 0; i < x; i++ ) {
        if ( i % 3 == 0 || i % 5 == 0 ) {
            sagot = sagot + i;
        }
    }
    cout<<sagot<<endl;
}
 return 0;
}
