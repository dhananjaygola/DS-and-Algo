#include<bits/stdc++.h>
using namespace std;

void Recursion(int b[],int start,int end){
	if(start>=end)
	return;
	swap(b[start],b[end]);
	Recursion(b,++start,--end);
}

void ReverseArr(int a[],int start,int end){
	while(start<end){
		swap(a[start++],a[end--]);
	}
}

int main(){
	int a[]={3,7,2,0,-1};
	int b[]={0,7,2,-3};
	int size1 = sizeof(a)/sizeof(a[0]);
	int size2 = sizeof(b)/sizeof(b[0]);
	ReverseArr(a,0,size1-1);
	Recursion(b,0,size2-1);
	for(auto& i:a){ cout<<i<<" ";}
	cout<<endl;
	for(auto& i:b){ cout<<i<<" ";}	
}