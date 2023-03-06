#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {1, 15, 10}, k = 6;
	int size = sizeof(a)/sizeof(a[0]);
	sort(a,a+size);
	int mi, ma, largest = a[size-1] - k, smallest = a[0] + k, ans = a[size-1] - a[0];
	for(int i = 0; i<size-1; ++i){
		mi = min(smallest, a[i+1] - k);
		if(mi < 0) continue;
		ma = max(largest, a[i] + k);
		ans = min(ans, ma - mi);
	}
	cout<<ans;
}