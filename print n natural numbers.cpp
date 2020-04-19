//Program to print natural numbers using recursion

#include<iostream>
using namespace std;

void inc(int n){ // 1 to n
	if(n==0) return;
	inc(n-1);
	cout<<n<<" ";
}
void dec(int n){ // n to 1
	if(n==0) return;
	cout<<n<<" ";
	dec(n-1);
}
int main(){
	int n;
	cin>>n;
	inc(n);
	cout<<endl;
	dec(n);
	return 0;
}
