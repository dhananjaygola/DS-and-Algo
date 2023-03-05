#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {1,2,3,4,5,6};
	int size = sizeof(a)/sizeof(a[0]);
	int i = 0, j = size-1;
	while(i<j){
		swap(a[i++],a[j]);
	}
	for(auto& i:a){ cout<<i<<" ";}
}