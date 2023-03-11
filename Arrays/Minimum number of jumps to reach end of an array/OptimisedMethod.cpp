#include <bits/stdc++.h>
using namespace std;

int minJumps(int a[], int size){
	int maxReach = 0, currentEnd = 0, jump = 0;
	for(int i = 0; i<size; ++i){
		maxReach = max(maxReach, i + a[i]);
		if(maxReach >= size-1)
			return ++jump;
		if(i == maxReach)
			return -1;
		if(i == currentEnd){
			++jump;
			currentEnd = maxReach;
		}
	}
}

int main(){
	int a[] = {4,2,3,4,1,6,7};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<minJumps(a,size);
}