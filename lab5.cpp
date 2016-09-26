#include <iostream>
#include <iomanip>
using namespace std;

char ans, p;
float grade;
void problem1();
void problem2();
void problem3();
int choice(int d);
int d, i, s, TP;

void problem1(){
struct Name{
       char fullName[100];
};

struct Student{
       int id;
       Name name;
       double quiz[3]; 
       double sum;
	   double average;      
};

void newLine();

    Student stud;
    cout << "Enter Student Record: \n";
    cout << "ID: ";
    cin >> stud.id;
    newLine();
    cout << "Name: ";
    cin.getline(stud.name.fullName, 99);
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": ";
            cin >> stud.quiz[i];        
    }
    
    cout << "\n\n";
    cout << "Student Record\n";
    cout << "ID: " << stud.id << endl;
    cout << "Name: " << stud.name.fullName << endl;
    for(int i=0; i<3; i++){       
            stud.sum+=stud.quiz[i];
    }
    stud.average=stud.sum/3;
    
    if (stud.average>=75)
    {
    	cout << "Grades: " << stud.average << endl;
		cout << "Remarks: Passed";
	}
	else
	{
		cout << "Grades: " << stud.average << endl;
		cout << " \nRemarks: Failed";
	}

}

void problem2(){
	struct Srecord{
	int id;
	char name[30];
	struct Quizzes{
		float quiz;
	};
 Quizzes quizzes[3];
};

void newLine();

	Srecord ci[5];
	cout << "Enter 5 Student<s> Record" << endl;
	for (i=0; i<5; i++){
		cout << "\nStudent " << (i+1) << endl;
		cout << "ID: ";
		cin >> ci[i].id;
		newLine();
		cout << "Name: ";
		cin.getline(ci[i].name, 49);
		cout << "Enter 3 quizze(s): ";
		for(s=0;s<3;s++){	
			cin >> ci[i].quizzes[s].quiz;	
		}
}
	cout << setw(5) << "No."
	<< setw(15) << "Student No"
	<< setw(20) << "Name"
	<< setw(10) << "Grade"
	<< setw(10) << "Remark";
	

	
	for(int i=0; i<5; i++){
		grade=0;
		for(s=0;s<3;s++){
		grade+=ci[i].quizzes[s].quiz;
		}
		cout << endl;
		cout << setw(5) << i+1
		<< setw(15) << ci[i].id
		<< setw(20) <<ci[i].name;
		cout << setw(10) << setprecision(4) << grade/3 << setw(10);
		if( grade/3>=75 ){
			cout << "Passed";
			}
			else{
			cout << "Failed";
			}
		}
		cout << endl;
}

void problem3(){ 
	struct Customer{
	struct Name{
		char firstName[20];
		char lastName[20];
	}name;
	
	struct Order{
		int day;
		int month;
		int year;
		int quan;
		struct Item{
			int ID;
			char itemName[20];
			int Price;
		};
	Item item[3];
	}order;
	
	double contNo;
};

void newLine();

	Customer c[3];
	for (i=0;i<3;i++){
		cout << "CUSTOMER INFORMATION " << i+1 << endl;
		cin.ignore();
		cout << "First Name: ";
		cin.getline(c[i].name.firstName,29);
		cout << "Last Name: ";
		cin.getline(c[i].name.lastName,29);
		cout << "ORDER DATE: "<<endl;
		cout << "Day: ";
		cin >> c[i].order.day;
		cout << "Month: ";
		cin >> c[i].order.month;
		cout << "Year: ";
		cin >> c[i].order.year;
		cout << "\nENTER 3 ITEMS: " <<endl;
		for (s=0;s<3;s++){
		    cout << "ID: ";
		    cin >> c[i].order.item[s].ID;
		    newLine();
    	    cout << "Name: ";
    		cin.getline(c[i].order.item[s].itemName,29);
    		cout << "Price: ";
    		cin >> c[i].order.item[s].Price;
    		cout << "Quantity: ";
    		cin >> c[i].order.quan;
    		cout << endl;
		}
		newLine();
}
	s=0;
	cout << "SUMMARY REPORT" << endl;
	cout << " #" << setw(30) << "Customer Name"
	<< setw(20) << "Order Date"
	<< setw(15) << "Items"
	<< setw(15) << "Price"
	<< setw(15) << "Quantity" <<endl;
	
	for (i=0;i<3;i++){
		TP=0;
		cout << " " << i+1
		<< setw(23) << c[i].name.lastName << ","
		<< setw(6) << c[i].name.firstName
		<< setw(11) << c[i].order.day << "/" << c[i].order.month << "/" << c[i].order.year << endl;
		
    	for (s=0;s<3;s++){
    		cout<<setw(67) << c[i].order.item[s].itemName
			<< setw(15) << c[i].order.item[s].Price
			<< setw(15) << c[i].order.quan << endl;
    		TP += c[i].order.item[s].Price;
		}
		TP=TP*c[i].order.quan;
		cout << setw(96) << "TOTAL PRICE: " << TP << endl;
	}
}

void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}

int choice(int d) {
cout << "Choose a problem number to solve [1-3]: ";
cin >> d;
switch(d) {
case 1:
problem1();
break;
case 2:
problem2();
break;
case 3:
problem3();
break;
break;
default: cout << endl<< "Error!" << endl;
break;
}
return d;
}
main()
{
	choice(d);
}
