#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string word,match="heart";
	int size = match.length();
	cout << ">>-h-e-a-r-t-> DETECTOR"<< endl;
	cout << endl;
	getline(cin,word);
	
	cout << endl;
	cout << "OUTPUT:" << endl;
	
	for(int j=0;j<word.length();j++){
		if(isupper(word[j])){
			word[j] = tolower(word[j]);
		}
				
		if(match == word.substr(j,size)){ 
			cout << ">>-h-e-a-r-t->";
			j+=size-1;
		} else {
			cout << word[j];
		}
					
	}
	
	
	return 0;
}
