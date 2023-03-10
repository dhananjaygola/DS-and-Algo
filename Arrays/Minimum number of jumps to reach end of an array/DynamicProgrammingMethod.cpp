#include <bits/stdc++.h>
using namespace std;

void minJumps(int a[], int size){
	int* jump = new int[size];
	set<int> s;
	jump[0] = 0;
	for(int i=1;i<size;++i){
		jump[i] = INT_MAX - 1;
	}	
	for(int i=1; i<size; ++i){
		for(int j=0; j<i; ++j){
			if(i <= j+a[j]){
				if(jump[i] > jump[j]+1){
					s.insert(j);
					jump[i] = jump[j] + 1;
				}
			}
		}
	}
	cout<<"No. of jumps : "<<jump[size-1]<<endl;
	cout<<"Jumps from index : ";
	for(set<int>::iterator itr = s.begin(); itr != s.end(); ++itr){ cout<<*itr<<" ";}
}

int main(){
	int a[] = {4,2,3,4,1,6,7};
	int size = sizeof(a)/sizeof(a[0]);
	minJumps(a,size);
}