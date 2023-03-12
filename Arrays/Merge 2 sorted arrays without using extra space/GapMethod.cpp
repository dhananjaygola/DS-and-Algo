#include <bits/stdc++.h>
using namespace std;

int main(){
	int a1[] = {1,4,7,8,10}, a2[] = {2,3,9};
	int n = sizeof(a1)/sizeof(a1[0]), m = sizeof(a2)/sizeof(a2[0]);
	int gap = (n+m)/2, i, j;
	while(gap > 0){
		i = 0;
		j = gap;
		while(j < (n+m)){
			if(j < n && a1[i] > a1[j])
				swap(a1[i],a1[j]);
			else if(j >= n && i < n && a1[i] > a2[j-n])
				swap(a1[i], a2[j-n]);
			else if(j >= n && i >= n && a2[i-n] > a2[j-n])
				swap(a2[i-n], a2[j-n]);
			++i;
			++j;
		}
		if(gap == 1)
			gap = 0;
		else
			gap = gap/2;
	}
	cout<<"arr1[] = ";
	for(auto& i:a1){ cout<<i<<" ";}
	cout<<"\narr2[] = ";
	for(auto& i:a2){ cout<<i<<" ";}
}