#include <bits/stdc++.h>
using namespace std;

int Duplicate(int a[], int size){
	sort(a,a+size);
	for(int i = 0; i<size-1; ++i){
		if(a[i] == a[i+1])
			return a[i];
	}
}

int main(){
	int a[] = {1,3,4,2,2};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<Duplicate(a,size);
}