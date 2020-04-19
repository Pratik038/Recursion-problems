#include<iostream>
using namespace std;

// i- input pointer and j- output pointer
void subsequences(char in[],char out[],int i,int j){
	//base case:
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<", ";
		return;
	}
	//recursive case:
	out[j]=in[i];
	subsequences(in,out,i+1,j+1);
	
	out[j]='\0';
	subsequences(in,out,i+1,j);
}
int main(){
	char in[100]="abcd";
 	char out[100];
 	subsequences(in,out,0,0);
	return 0;
}
