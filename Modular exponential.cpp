#include<iostream>
using namespace std;
int mod(int x,int n,int M){
	//in O(log n)time complexity
	if(n==0) return 1;
	else if(n%2==0){
		int y=mod(x,n/2,M);
		return (y*y)%M;
	}
	else
		return ((x%M)*mod(x,n-1,M))%M;
}
int main(){
	cout<<mod(5,3,7);
	return 0;
}
