#include<iostream>
using namespace std;
int F[51];
int fib(int n){
	if(F[n]!=-1) return F[n];
	F[n]=fib(n-1)+fib(n-2);
	return F[n];
}
int main(){
	F[0]=0;F[1]=1;
	for(int i=2;i<51;i++) F[i]=-1;
	int n;
	cout<<"Enter a number : "; cin>>n;
	cout<<fib(n);
	return 0;
}
