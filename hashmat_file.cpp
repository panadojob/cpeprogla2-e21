#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main()
{
	int a , b , i, no1, no2, no3;
	cout<<"Sagot"<<endl;
	
	ifstream f("sample.txt");
	
	while (f >> a >> b) {
          cout << abs(a-b) <<endl;;
}
        
   
   
    return 0;

}
    
        
	
	
	
