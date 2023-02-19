#include<bits/stdc++.h>
using namespace std;

void partition(int a[],int size){
	int pivot = 0, i = -1, j = 0;
	while(j<size){
		if(a[j]<pivot){
			swap(a[++i],a[j]);
		}
		++j;
	}
}

int main(){
	int a[]={2,4,-3,2,-6};
	int size = sizeof(a)/sizeof(a[0]);
	partition(a,size);
	for(auto& i:a){ cout<<i<<" ";}
}