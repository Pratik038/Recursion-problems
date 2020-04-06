#include<iostream>
using namespace std;
bool isArraySorted(int a[],int n){
	if(n==1)
		return true;
	return (a[n-1]<a[n-2]) ? false : isArraySorted(a,n-1); 
}
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	if(isArraySorted(a,n))
		cout<<"Array is sorted!";
	else
		cout<<"Array is unsorted!";
	return 0;
}
