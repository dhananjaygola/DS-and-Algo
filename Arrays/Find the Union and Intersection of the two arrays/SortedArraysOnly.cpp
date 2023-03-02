#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {0,2,3,5};
	int b[] = {0,5,6,7};
	int size1 = sizeof(a)/sizeof(a[0]);
	int size2 = sizeof(b)/sizeof(b[0]);
	int i = 0, j = 0;
	vector<int> U,I;
	while((i<size1)&&(j<size2)){
		if(a[i]<b[j]){
			U.push_back(a[i]);
			++i;
		}
		else if(b[j]<a[i]){
			U.push_back(b[j]);
			++j;
		}
		else{
			U.push_back(a[i]);
			I.push_back(a[i]);
			++i;
			++j;
		}
	}
	
	while(i<size1){
		U.push_back(a[i]);
		++i;
	}
	while(j<size2){
		U.push_back(b[j]);
		++j;
	}
	
	cout<<"Union : ";
	for(auto& x:U){ cout<<x<<" ";}
	cout<<endl;
	cout<<"Intersection : ";
	for(auto& x:I){ cout<<x<<" ";}
}