#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
double prob1(double num);
void problem2(){
	int uniques [10];
	int MAX = 20;
	int Min = 1;
	int num; 
	bool check = true; 
	
	srand(time(NULL)); 
	cout << "10 unique numbers : ";	
	
	for (int i=0;i<10;i++){
    	
	do{
    	num=rand()%MAX+Min;
    	check = true;
   		 for (int j=0;j<i;j++)
   		     if (num == uniques[j]) {
           	 check = false; 
             break; 
        }
    } while (!check); 
	uniques[i]=num;
	cout << num << " ";
	}
	
}

int call_by_value(int num){
	if(num==1)
		return 1;
	else
     		return num*call_by_value(num-1);
}

int factorial(int n);
int main()
{
	double num1, result;
	cout << "Enter The Number To Be Rounded Off : ";
	cin >> num1;
	
	result = prob1(num1);
	cout << result << endl <<endl <<endl << endl;
	problem2();
	cout << endl<<endl<<endl;
cout <<  endl<< endl;
	int n;
    cout << "Enter A Positive Integer: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n);
    return 0;
	
}
	int factorial(int n)
{
    if(n!=1)
     return n*factorial(n-1);
}
double prob1(double num1){

	return round(num1);
}
