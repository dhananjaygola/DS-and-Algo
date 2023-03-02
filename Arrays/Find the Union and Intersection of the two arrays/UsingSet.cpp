#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {2,3,5,0};
	int b[] = {5,6,7,5,0};
	int size1 = sizeof(a)/sizeof(a[0]);
	int size2 = sizeof(b)/sizeof(b[0]);
	set<int> U(a,a+size1);
	set<int> I(a,a+size1);
	for(int i=0; i<size2; ++i){
		U.insert(b[i]);
	}
	cout<<"Union : ";
	for(set<int>::iterator itr = U.begin(); itr!=U.end();++itr){
		cout<<*itr<<" ";
	}
	cout<<endl;
	cout<<"Intersection : ";
	for(int i=0;i<size2;++i){
		if(I.find(b[i]) != I.end())
		{
			I.erase(b[i]);
			cout<<b[i]<<" ";
		}
	}
}