/*This program compares two strings and check if they have words that are the same */

#include <iostream>
#include <string>

using namespace std;

int main(){
	int a;
	cin >> a;
	string b,c;
	
	
	
	for(int i=0;i<a;i++){
		
		cin >> b >> c;
		
		int size = b.length();
		int check=0;
		
		
			for(int j=0;j<c.length();j++){
				
					if(b == c.substr(j,size)){ 
						check =1;
					} 
					
			}
		
		
		if(check >= 1){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		} 
		
		check = 0;
		
	}
	
	return 0;
}
