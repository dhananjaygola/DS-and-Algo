#include <bits/stdc++.h>
using namespace std;

int Duplicate(int a[], int size){
	if(a[a[0]] == a[0])
		return a[0];
	swap(a[a[0]], a[0]);
	Duplicate(a,size);
}

int main(){
	int a[] = {4,2,3,1,3};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<Duplicate(a,size);
}