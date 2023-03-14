#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {3,2,1};
	int size = sizeof(a)/sizeof(a[0]);
	next_permutation(a,a+size);
	cout<<"[ ";
	for(const auto& i:a){ cout<<i<<", ";}
	cout<<"\b\b ]";
}