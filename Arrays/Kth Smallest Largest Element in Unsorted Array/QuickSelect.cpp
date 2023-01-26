#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int left,int right){
	int pivot = a[right], j = left, i = left-1;
	while(j<right){
	if(a[j]<pivot){
		swap(a[++i],a[j]);
		}
	++j;
	}
	swap(a[++i],a[right]);
	return i;
}

int quicksort(int a[],int l,int r,int k){
	int p = partition(a,l,r);
	if(p==k)
		return p;
	else if(p>k)
		quicksort(a,l,p-1,k);
	else
		quicksort(a,p+1,r,k);
}

int main(){
	int a[] = {2,8,5,-7},k,final;
	int size = sizeof(a)/sizeof(a[0]);
	cout<<"Enter any number < "<<size<<" : ";
	cin>>k;
	cout<<a[quicksort(a,0,size-1,k-1)];
}