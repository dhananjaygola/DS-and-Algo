#include <bits/stdc++.h>
using namespace std;

void nextPermutation(int a[], int size){
	int i = -1, j;
	for(i = size-2; i >= 0; --i){
		if(a[i] < a[i+1])
			break;
	}
	if(i < 0){
		reverse(a,a+size);
		return;
	}
	for(j = size-1; j < i; --j){
		if(a[i] < a[j])
			break;
	}
	swap(a[i],a[j]);
	reverse(a+i+1, a+size);
	return;
}

int main(){
	int a[] = {1,3,2};
	int size = sizeof(a)/sizeof(a[0]);
	nextPermutation(a,size);
	cout<<"[ ";
	for(const auto& i:a){ cout<<i<<", ";}
	cout<<"\b\b ]";
}