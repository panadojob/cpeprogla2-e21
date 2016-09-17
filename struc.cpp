#include <iostream>
using namespace std;


struct Name{
       char lastname [20];
	   char firstname [20];      
};
struct Date{
	int year;
	char month[20];
	int day;
};
struct Item {
	int code;
	int price
};
struct Customer{
       char order[10];
       int cnum;
};
struct Order{
	char item[20];
	int quantity
};
struct yey{
	Name name;
	Date date;
	Item item;
	Customer customer;
	Order order;
};

void newLine();

int main(){
    Student stud;
    cout << "Enter student records: \n";
    cout << "ID: ";
    cin >> stud.id;
    newLine();
    cout << "First Name: ";
    cin.getline(stud.name.firstName, 29);
    cout << "Last Name: ";
    cin.getline(stud.name.lastName, 29);
    for(int i=0; i<3; i++){
            cout << "Grade "<< i << ": ";
            cin >> stud.grade[i];        
    }
    
    cout << "\n\n";
    cout << "Display student records\n";
    cout << "ID: " << stud.id << endl;
    cout << "First Name: " << stud.name.firstName << endl;
    cout << "Last Name: " << stud.name.lastName << endl;
    for(int i=0; i<3; i++){
            cout << "Grade "<< i << ": " << stud.grade[i] << endl;        
    }
    
    system("pause > 0");
    return 0;   
}
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}
