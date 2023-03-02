#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {0,2,3,5};
	int b[] = {5,6,7};
	int size1 = sizeof(a)/sizeof(a[0]);
	int size2 = sizeof(b)/sizeof(b[0]);
	int i = 0, j = 0;
	while((i<size1)&&(j<size2)){
		if(a[i]<b[j]){
			cout<<a[i]<<" ";
			++i;
		}
		else if(b[j]<a[i]){
			cout<<b[j]<<" ";
			++j;
		}
		else{
			cout<<a[i]<<" ";
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