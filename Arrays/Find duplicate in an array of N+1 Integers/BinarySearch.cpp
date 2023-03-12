#include <bits/stdc++.h>
using namespace std;

int Duplicate(int a[], int size){
	//sort(a,a+size);
	vector<int> nums(a,a+size);
	auto small_or_equal = [&](int cur) {
            int count = 0;
            for (auto &num: nums) {
                if (num <= cur)
                    count++;
            }
            return count;
        };
	int low = 1, high = size;
        int duplicate = -1;
        while (low <= high) {
            int cur = (low + high) / 2;
            
            if (small_or_equal(cur) > cur) { 
                duplicate = cur;
                high = cur - 1;
            } else {
                low = cur + 1;
            }
        }

        return duplicate;
}

int main(){
	int a[] = {1,5,4,2,3,5};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<Duplicate(a,size);
}