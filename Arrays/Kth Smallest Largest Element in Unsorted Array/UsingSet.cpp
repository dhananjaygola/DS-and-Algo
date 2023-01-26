#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {2,8,5,-7},k;
	int size = sizeof(a)/sizeof(a[0]);
	cout<<"Enter any number < "<<size<<" : ";
	cin>>k;
	set<int> s(a,a+size);
	set<int>::iterator itr = s.begin();
	advance(itr,k-1);
	cout<<endl<<*itr;
}