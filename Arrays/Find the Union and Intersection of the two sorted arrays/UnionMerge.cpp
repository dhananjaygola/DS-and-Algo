#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {2,4,-1,3,-9};
	int b[] = {10,3,-1,11};
	int i = 0, j = 0;
	int size1 = sizeof(a)/sizeof(a[0]);
	int size2 = sizeof(b)/sizeof(b[0]);
	sort(a,a+size1);
	sort(b,b+size2);
	while(i<size1&&j<size2){
		if(a[i]<b[j]){
			cout<<a[i]<<" ";
			++i;
		}
		else if(a[i]>b[j]){
			cout<<b[j]<<" ";
			++j;
		}
		else{
			cout<<b[j]<<" ";
			++i;
			++j;
		}
	}
	while(i<size1){
		cout<<a[i]<<" ";
		++i;
	}
	while(j<size2){
		cout<<b[j]<<" ";
		++j;
	}
}