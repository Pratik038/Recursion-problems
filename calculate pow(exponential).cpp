#include<iostream>
using namespace std;
long long pow(int x,int n){
	//in O(n) time complexity
	if(n==0)
		return 1;
	else
		return x*pow(x,n-1);
}
long long POW(int x,int n){
	//in O(logn) time complexity.
	if(n==0) return 1;
	else if(n%2==0){
		long long y=POW(x,n/2);
		return y*y;
	}
	else
		return x*POW(x,n-1);
}
int main(){
	cout<<POW(100,30);
	return 0;
}
