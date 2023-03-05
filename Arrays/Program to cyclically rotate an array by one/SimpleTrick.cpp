// Rotate array by 'k' times
#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {1,2,3,4,5,6},k;
	int size = sizeof(a)/sizeof(a[0]);
	cout<<"enter any nuymber : ";
	cin>>k;
	k = (k%size)-1;
	reverse(a+size-k-1,a+size);
	reverse(a,a+size-k-1);
	reverse(a,a+size);
	for(auto& i:a){ cout<<i<<" ";}
}