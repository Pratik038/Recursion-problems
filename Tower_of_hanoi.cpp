//Program on Tower of Hanio.
#include<iostream>
using namespace std;
static int k=1;
void towerOfHanio(int n,int a,int b,int c){
	if(n==1)
		cout<<k++<<". "<<"Move disk from "<<a<<" to "<<c<<endl;
	else{
		towerOfHanio(n-1,a,c,b);
		cout<<k++<<". "<<"Move disk from "<<a<<" to "<<c<<endl;
		towerOfHanio(n-1,b,c,a);
	}
}
int main(){
	int n;
	cout<<"Enter the number of disks:";
	cin>>n;
	towerOfHanio(n,1,2,3);
	return 0;
}
