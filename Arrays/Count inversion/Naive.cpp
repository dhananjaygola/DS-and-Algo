#include <bits/stdc++.h>
using namespace std;

int countInversion(int a[], int size){
	int count = 0;
	for(int i = 0; i<size; ++i){
		for(int j = i+1; j<size; ++j){
			if(a[i] > a[j])
				++count;
		}
	}
	return count;
}

int main(){
	int a[] = {2, 4, 1, 3, 5};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<countInversion(a,size);
}