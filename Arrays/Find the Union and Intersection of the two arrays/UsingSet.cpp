#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {2,3,5,0};
	int b[] = {5,6,7,5};
	int size1 = sizeof(a)/sizeof(a[0]);
	int size2 = sizeof(b)/sizeof(b[0]);
	set<int> s(a,a+size1);
	for(int i=0; i<size2; ++i){
		s.insert(b[i]);
	}
	for(set<int>::iterator itr = s.begin(); itr!=s.end();++itr){
		cout<<*itr<<" ";
	}
}