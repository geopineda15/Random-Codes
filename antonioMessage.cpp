/*This program encrypts the message in a sequence of characters using Multi-dimensional arrays */

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(){
	
	string name;
	getline(cin,name);
	
	int row,column,closest;
	int size = name.length();
	int x,y;
	
	float root = sqrt(size);
	
	if(root-floor(root)==0){
		row = sqrt(size);
		column = row;
	}else {
		row = floor(root);
		closest = row +1;
		
		row = closest;
		column = closest;
		
	}
	
	int count=0;
	
	char list[row][column];
	
	for(int i=0;i<row;i++){
		for(int j=0, k=0;j<column,k<size;j++,k++){
			list[i][j] = name[k];
			count++;
		}
		if(count == size){
			break;
		}
		
	}
	
	int count2=0;
	for(int l=0;l<column;l++){
		for(int m=0;m<row;m++){
			cout << list[m][l];
			count2++;
		}
		cout << " ";
		if(count2 == size){
			break;
		}
	}
	
	
	
	
	return 0;
}
