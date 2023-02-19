#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {2,1,0,0,2,2};
	int size = sizeof(a)/sizeof(a[0]);
	int low = 0, mid = 0, high = size-1;
	while(mid<=high){
		switch(a[mid]){
			case 0 :
				swap(a[low++],a[mid++]);
				break;
			case 1 :
				++mid;
				break;
			case 2 :
				swap(a[mid],a[high--]);
				break;
		}
	}
	for(auto& i:a){ cout<<i<<" ";}
}