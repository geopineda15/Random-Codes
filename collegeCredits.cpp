#include <iostream>
#include <iomanip>

using namespace std;

int list[500];
int type,counter=0,i=0;
int freshman=0, sophomore=0, junior=0, senior=0;

void input(int a);
void count(int b);
void output();

int main(){
	
	cout << "Enter credits earned: ";
	
	while(true){
		cin >> type;
		input(type);
		
		if(type == -99){
			break;
		}
	}
	
	output();
	
	return 0;
}

void input(int a){
	list[i] = a;
	i++;
	counter++;
	count(a);
}

void count(int b){
	if(b >=3 && b <=31){
		freshman++;
	} else if(b >=32 && b <=63 ){
		sophomore++;
	} else if(b >=64 &&  b <=95){
		junior++;
	} else if(b >=96 && b <=120){
		senior++;
	}
}

void output(){
	cout << fixed;
	cout << endl;
	cout << "Number of credits entered " << counter-1 << endl;
	cout << endl;
	cout << "Total count: Freshmen = " << freshman << endl;
	cout << setw(25) << "Sophomore = " << sophomore << endl;
	cout << setw(22) << "Junior = " << junior << endl;
	cout << setw(22) << "Senior = " << senior << endl;
	cout << "Overall total = " << counter-1;
}
