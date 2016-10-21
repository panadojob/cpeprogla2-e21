#include<iostream>
#include<fstream>
using namespace std;
main(){	
	ifstream f("input.txt");
	int a;
	while(f>>a){
		if((a%3==0)&&(a%5==0)){cout<<"FizzBuzz\n";}
		else if(a%5==0){cout<<"Buzz\n";}
		else if(a%3==0){cout<<"Fizz\n";}
		else{cout<<a<<endl;}
	}
}
