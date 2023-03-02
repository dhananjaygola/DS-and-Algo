#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {2,3,5,0};
	int b[] = {5,6,7,0,5};
	int size1 = sizeof(a)/sizeof(a[0]);
	int size2 = sizeof(b)/sizeof(b[0]);
	map<int,int> m;
	for(int i=0; i<size1; ++i){
		m[a[i]] += 1;
	}
	for(int i=0; i<size2; ++i){
		m[b[i]] += 1;
	}
	cout<<"Union : ";
	for(map<int,int>::iterator itr = m.begin(); itr!=m.end(); ++itr){
		cout<<itr->first<<" ";
	}
	cout<<endl;
	cout<<"Intersection : ";
	for(map<int,int>::iterator itr = m.begin(); itr!=m.end(); ++itr){
		if(itr->second > 1)
			cout<<itr->first<<" ";
	}
}