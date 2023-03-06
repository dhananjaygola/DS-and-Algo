#include <bits/stdc++.h>
using namespace std;

int minJumpsRec(int a[], int size, int currPos){
	if(currPos >= size-1)
		return 0;
	int maxJumps = a[currPos], minJumps = INT_MAX;
	while(maxJumps > 0){
		minJumps = min( minJumps, 1 + minJumpsRec(a,size,currPos + maxJumps));
		--maxJumps;
	}
	return minJumps;
}

int main(){
	int a[] = {4,2,3,4,1,6,7};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<minJumpsRec(a,size,0);
}