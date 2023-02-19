#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[]={2,4,-3,-1,6};
	int size = sizeof(a)/sizeof(a[0]);
	sort(a,a+size);
	for(auto& i:a){ cout<<i<<" ";}
}