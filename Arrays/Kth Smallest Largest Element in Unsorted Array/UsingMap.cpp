#include<bits/stdc++.h>
using namespace std;

int Ksmallest(map<int,int>mp,int k){
	int freq=0;
	for(map<int,int>::iterator itr=mp.begin();itr!=mp.end();++itr){
		if(freq>=k){
			return itr->first;
		}
		freq += (itr->second);
	}
}

int main(){
	int a[]={2,0,4,-7},k;
	int size = sizeof(a)/sizeof(a[0]);
	cout<<"Enter any number < "<<size<<" : ";
	cin>>k;
	map<int,int> mp;
	for(int i=0;i<size;++i){
		mp[a[i]] += 1;
	}
	cout<<Ksmallest(mp,k-1);
}