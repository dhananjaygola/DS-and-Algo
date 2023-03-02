#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {2,3,5,0};
	int b[] = {5,6,7,5,0};
	int size1 = sizeof(a)/sizeof(a[0]);
	int size2 = sizeof(b)/sizeof(b[0]);
	set<int> s(a,a+size1);
	for(int i=0; i<size2; ++i){
		s.insert(b[i]);
	}
	cout<<"Union : ";
	for(set<int>::iterator itr = s.begin(); itr!=s.end();++itr){
		cout<<*itr<<" ";
	}
	cout<<endl;
	cout<<"Intersection : ";
	for(int i=0;i<size1;++i){
		if(find(b,b+size2,a[i])!=(b+size2))
			cout<<a[i]<<" ";
	}
}