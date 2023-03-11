#include <bits/stdc++.h>
using namespace std;

int Duplicate(int a[], int size){
	int num = 0;
	for(int i = 0; i<size; ++i){
		num = abs(a[i]);
		if(a[num] < 0)
			return num;
		a[num] = -a[num];
	}
}

int main(){
	int a[] = {4,3,4,1,2};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<Duplicate(a,size);
}