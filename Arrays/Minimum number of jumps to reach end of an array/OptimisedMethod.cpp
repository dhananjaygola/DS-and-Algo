#include <bits/stdc++.h>
using namespace std;

int minJumps(int a[], int size){
	if(size <= 1)
		return 0;
	if(a[0] >= size-1)
		return 1;
	if(a[0] == 0)
		return -1;
		
	int maxReach = a[0], step = a[0], jump = 1;
	for(int i = 1; i<size; ++i){
		if(i == size-1)
			return jump;
		if(a[i] >= (size-1) - i)
			return jump+1;
		maxReach = max(maxReach, i+a[i]);
		step--;
		if(step == 0){
			++jump;
			if(i >= maxReach)
				return -1;
			step = maxReach - i;
		}
	}
	return -1;
}

int main(){
	int a[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<minJumps(a,size);
}