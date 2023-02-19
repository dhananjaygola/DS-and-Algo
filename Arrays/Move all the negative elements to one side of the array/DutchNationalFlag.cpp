#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[]={2,4,-3,-1,6};
	int size = sizeof(a)/sizeof(a[0]);
	int low = 0, high = size-1;
	while(low<=high){
		if(a[low]<0){
			++low;
		}
		else if(a[low]>0){
			swap(a[low],a[high--]);
		}
	}
	for(auto& i:a){ cout<<i<<" ";}
}