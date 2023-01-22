#include<bits/stdc++.h>
using namespace std;

class Pair{
	public:
		int min,max;
};

Pair minmax(int a[],int start,int end){
	Pair obj1;
	if(start==end){
		obj1.max = a[start];
		obj1.min = a[start];
		return obj1;
	}
	if(start==end-1){
		if(a[start]>a[end]){
			obj1.max = a[start];
			obj1.min = a[end];
		}
		else if(a[start]<a[end]){
			obj1.max = a[end];
			obj1.min = a[start];
		}
		return obj1;
	}
	int mid = (end-start)/2;
	Pair mml = minmax(a,start,mid);
	Pair mmr = minmax(a,mid+1,end);
	if(mml.min<mmr.min){
		obj1.min = mml.min;
	}
	else{
		obj1.min = mmr.min;
	}
	if(mml.max>mmr.max){
		obj1.max=mml.max;
	}
	else{
		obj1.max=mmr.max;
	}
	return obj1;
}

int main(){
	int a[]={2,0,6,5,-8};
	int size = sizeof(a)/sizeof(a[0]);
	Pair final = minmax(a,0,size-1);
	cout<<"min : "<<final.min<<endl<<"max : "<<final.max;
}