#include<bits/stdc++.h>
using namespace std;

int Ksmallest(priority_queue<int> q,int a[],int size,int k){
	for(int i=k;i<size;++i){
		if(q.top()>a[i]){
			q.pop();
			q.push(a[i]);
		}
	}
	return q.top();
}

int main(){
	int a[]={2,0,4,-7},k;
	int size = sizeof(a)/sizeof(a[0]);
	cout<<"Enter any number < "<<size<<" : ";
	cin>>k;
	priority_queue<int> q;
	for(int i=0;i<k;++i){
		q.push(a[i]);
	}
	cout<<Ksmallest(q,a,size,k);
}