#include<iostream>
#include<cstring>
using namespace std;
int main (){
	char stringl[20];
	int i, length;
	int flag =0;
	cout<<"Enter a string:";
	cin>>stringl;
	length= strlen (stringl);
	for (i=0; i<length; i++){
		if (stringl[i]!= stringl[length-i-1]) {
			flag = 1;
			break;
		}
	}
	if (flag){
		cout<<stringl<< "is not a Palindrome"<< endl;
	}
	else {
		cout<< stringl<<" is a Palindrome"<< endl;
	}
	return 0;
}
