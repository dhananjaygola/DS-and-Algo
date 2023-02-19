#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {2,1,0,1,0,2,2};
	int size = sizeof(a)/sizeof(a[0]);
	int count0 = 0, count1 = 0, count2 = 0;
	for(int i=0;i<size;++i){
		switch(a[i]){
			case 0 :
				++count0;
				break;
			case 1 :
				++count1;
				break;
			case 2 :
				++count2;
				break;
		}
	}
	for(int i=0;i<size;++i){
		if(count0>0){
			a[i]=0;
			--count0;
			continue;
		}
		else if(count1>0){
			a[i]=1;
			--count1;
			continue;
		}
		else if(count2>0){
			a[i]=2;
			--count2;
			continue;
		}
	}
	for(auto& i:a){cout<<i<<" ";}
}