#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[]={2,4,-3,-1,6};
	int size = sizeof(a)/sizeof(a[0]);
	int left = 0, right = size-1;
	while(left<=right){
		if(a[left]<0&&a[right]<0){
			++left;
			--right;
		}
		else if(a[left]>0&&a[right]<0){
			swap(a[left++],a[right--]);			
		}
		else if(a[left]>0&&a[right]>0){
			--right;
		}
	}
	for(auto& i:a){ cout<<i<<" ";}
}