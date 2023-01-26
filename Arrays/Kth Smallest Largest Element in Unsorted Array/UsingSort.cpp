#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {2,8,5,-7},k;
	int size = sizeof(a)/sizeof(a[0]);
	cout<<"Enter any number < "<<size<<" : ";
	cin>>k;
	sort(a,a+size);
	cout<<endl;
	cout<<a[k-1];
}