#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {2,3,5,0};
	int b[] = {5,6,7,0,5};
	int size1 = sizeof(a)/sizeof(a[0]);
	int size2 = sizeof(b)/sizeof(b[0]);
	vector<int> U(a,a+size1);
	vector<int> I;
	for(int i=0;i<size2;++i){
		if(find(a,a+size1,b[i])==(a+size1)){
			U.push_back(b[i]);
		}
		else
			continue;
	}
	for(int i=0;i<size2;++i){
		if(find(a,a+size1,b[i])==(a+size1)){
			continue;
		}
		else if(find(I.begin(),I.end(),b[i])==end(I))
			I.push_back(b[i]);
	}
	cout<<"Union : ";
	for(auto& i:U){ cout<<i<<" ";}
	cout<<endl;
	cout<<"Intersection : ";
	for(auto& i:I){ cout<<i<<" ";}
}