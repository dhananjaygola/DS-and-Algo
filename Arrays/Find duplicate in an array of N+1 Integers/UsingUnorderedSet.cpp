#include <bits/stdc++.h>
using namespace std;

int Duplicate(int a[], int size){
	unordered_set<int> s;
	for(int i = 0; i<size; ++i){
		if(s.count(a[i]))
			return a[i];
		s.insert(a[i]);
	}
}

int main(){
	int a[] = {1,3,4,3,2};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<Duplicate(a,size);
}