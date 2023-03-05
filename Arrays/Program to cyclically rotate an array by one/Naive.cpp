#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {1,2,3,4,5,6};
	int size = sizeof(a)/sizeof(a[0]);
	int last = a[size-1];
	for(int i=size-1;i>0;--i){
		a[i] = a[i-1];
	}
	a[0] = last;
	for(auto& i:a){ cout<<i<<" ";}
}