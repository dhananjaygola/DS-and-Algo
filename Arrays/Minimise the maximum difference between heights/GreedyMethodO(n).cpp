#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {1, 5, 15, 10}, k = 3;
	int size = sizeof(a)/sizeof(a[0]);
	int average = (*max_element(a,a+size) + *min_element(a,a+size))/2, ans = *max_element(a,a+size) - *min_element(a,a+size);
	for(int i = 0; i<size; ++i){
		if(a[i] <= average)
			a[i] = a[i] + k;
		else if(a[i] > average)
			a[i] = a[i] - k;
	}
	ans = min(ans, *max_element(a,a+size) - *min_element(a,a+size));
	cout<<ans;
}