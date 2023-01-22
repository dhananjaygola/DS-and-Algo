#include<bits/stdc++.h>
using namespace std;

int main(){
	array<int,4>a={3,-4,7,4};
	cout<<"min : "<<*min_element(a.begin(),a.end())<<endl<<"max : "<<*max_element(a.begin(),a.end());
	cout<<endl;
	sort(a.begin(),a.end());
	cout<<"min : "<<a[0]<<endl<<"max : "<<a[a.size()-1];
}