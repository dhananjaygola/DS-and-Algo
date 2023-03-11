#include <bits/stdc++.h>
using namespace std;

int Duplicate(int a[], int size){
	while(1>0){
		if(a[a[0]] == a[0])
			return a[0];
		swap(a[a[0]], a[0]);
	}
}

int main(){
	int a[] = {1,2,3,2,4};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<Duplicate(a,size);
}