#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {1,-1,8,-2,16,-3};
	int size = sizeof(a)/sizeof(a[0]);
	int max_current = a[0], max_global = a[0], start = 0, end = 0;
	for(int i = 1; i<size; ++i){
		if(a[i] > max_current+a[i]){
			start = i;
			max_current = a[i];
		}
		else if(max_current+a[i] >= a[i]){
			max_current = max_current + a[i];
		}
		
		if(max_current > max_global){
			max_global = max_current;
			end = i;
		}
	}
	cout<<"\nArray : ";
	while(start <= end){
		cout<<a[start++]<<" ";
	}
	cout<<"\nSum : "<<max_global;
}