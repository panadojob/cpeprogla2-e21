#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int a = 0, b = 0, i, no1, no2, no3;
	cout << "Enter the number of Hashmat's warrioirs and his opponent \n";
	
	for(i=0;i<1;i++)
	{
		if(a<=2^32 || b<=2^32)
		{
			cin>>a>>b;
			no1 = a-b;
			cin>>a>>b;
			no2 = a-b;
			cin>>a>>b;
			no3 = a-b;
		}
		else 
		cout<<"End of FIle";
	}
	cout<<endl;
	cout<<abs(no1)<<endl;
	cout<<abs(no2)<<endl;
	cout<<abs(no3)<<endl;
	
	return 0;
}
