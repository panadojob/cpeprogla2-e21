#include<iostream>
#include<string.h>
using namespace std;
char str1[100], str2[200], word[100], yesno;
int n, flag, chooser;
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
int choose(int chooser);
char again(char yesno);

void problem1() {
	cout<<"\nSTRING COMPARE";
	cin.ignore();
	cout<<"\nEnter a first word (str1): ";
	gets(str1);
	cout<<"\nEnter second word  (str2): ";
	gets(str2);
	if(strcmp(str1,str2)==0) cout<<"equal =)\n";
	else if(strcmp(str1,str2)>0) cout<<"positive \n";
	else if(strcmp(str1,str2)<0) cout<<"negative \n";
}

void problem2() {
	cout<<"\nSTRING COPY";
	cin.ignore();
	cout<<"Enter a first word (str1): ";
	gets(str1);
	cout<<"Enter second word  (str2): ";
	gets(str2);
	cout<<"New string value for str1: "<<strcpy(str1, str2);
}

void problem3() {
	cout<<"\nSTRING CONCATENATION";
	cin.ignore();
	cout<<"Enter a first word (str1): ";
	gets(str1);
	cout<<"Enter second word  (str2): ";
	gets(str2);
	cout<<"New string value for str1: "<<strcat(str1, str2);
}

void problem4() {
	cout<<"\nPALINDROME";
	cin.ignore();
	cout<<"\nEnter a word: ";
	gets(word);
	n=strlen(word);
	for(int i=0;i<n;i++) {
		if(word[i]!=word[n-(i+1)]) flag=0;
		else flag=1;
    }
    if (flag==1) cout<<word<<" is a palindrome.";
    else if (flag==0) cout<<word<<" is Not a palindrome.";
}

void problem5() {
	cout<<"\nCAPITALIZATION";
	cin.ignore();
	cout<<"\nEnter a word: ";
	gets(word);
	strlwr(word);
	word[0]-=32;
	for(int i=0;i<strlen(word);i++) {
		if(word[i]==32) word[i+1]-=32;
	}
	cout<<word<<endl;
}

void problem6() {
	cout<<"\nREVERSE VERTICAL ORDER";
	cin.ignore();
	cout<<"\nEnter a phrase: ";
	gets(word);
	n=strlen(word);
	for(int i=n;i>=0;i--) {
		if (word[i]==32) {
			int j=i+1;
			while(word[j]!=32&&j<n) {
				cout<<word[j];
				j++;
			}
			cout<<endl;
		}
	}
	int k=0;
	while(word[k]!=32) {
		cout<<word[k];
		k++;
	}
}

int choose(int chooser) {
	cout<<"Choose a problem # to solve (1-6)";
	cin>>chooser;
	switch(chooser) {
		case 1:
			problem1();
			again(yesno);
			break;
		case 2:
			problem2();
			again(yesno);
			break;
		case 3:
			problem3();
			again(yesno);
			break;
		case 4:
			problem4();
			again(yesno);
			break;
		case 5:
			problem5();
			again(yesno);
			break;
		case 6:
			problem6();
			again(yesno);
			break;
		default:
			break;
	}
	return chooser;
}

char again(char yesno) {
	cout<<"nSolve another problem??? [y/n] ";
	cin>>yesno;
	if (yesno=='y') {
		system("cls");
		choose(chooser);
	}
	else if (yesno=='n') {
		cout<<"\nThanks for using this program :)\n";
	}
	else {
		again(yesno);
	}
	return yesno;
}

main() {
	choose(chooser);
}
