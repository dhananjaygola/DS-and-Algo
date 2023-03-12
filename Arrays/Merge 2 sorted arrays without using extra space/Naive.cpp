#include <bits/stdc++.h>
using namespace std;

int main(){
	int a1[] = {1,4,8,10}, a2[] = {2,3,9};
	int n = sizeof(a1)/sizeof(a1[0]), m = sizeof(a2)/sizeof(a2[0]);
	int* a3 = new int[n+m];
	copy(a1, a1+n, a3);
	copy(a2, a2+m, a3+n);
	sort(a3,a3+n+m);
	copy(a3, a3+n, a1);
	copy(a3+n, a3+n+m, a2);
	cout<<"arr1[] = ";
	for(auto& i:a1){ cout<<i<<" ";}
	cout<<"\narr2[] = ";
	for(auto& i:a2){ cout<<i<<" ";}
}