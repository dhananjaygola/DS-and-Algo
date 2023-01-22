#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[]={3,8,0,-9};
	array<int,4>b={2,0,5,4};
	int size = sizeof(a)/sizeof(a[0]);
	reverse(a,a+size);
	reverse(b.begin(),b.end());
	for(auto& i:a){ cout<<i<<" ";}
	cout<<endl;
	for(auto& i:b){ cout<<i<<" ";}
}