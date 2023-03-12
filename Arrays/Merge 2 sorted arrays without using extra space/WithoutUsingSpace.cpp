#include <bits/stdc++.h>
using namespace std;

int main(){
	int a1[] = {1,4,7,8,10}, a2[] = {2,3,9};
	int n = sizeof(a1)/sizeof(a1[0]), m = sizeof(a2)/sizeof(a2[0]);
	for(int i=0; i<n; ++i){
		if(a1[i] > a2[0]){
			swap(a1[i], a2[0]);
			sort(a2,a2+m);
		}
	}
	cout<<"arr1[] = ";
	for(auto& i:a1){ cout<<i<<" ";}
	cout<<"\narr2[] = ";
	for(auto& i:a2){ cout<<i<<" ";}
}