#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals){
	sort(intervals.begin(), intervals.end());
	vector<vector<int>> merge;
	for(const auto& interval:intervals){
		if(merge.empty() || merge.back()[1] < interval[0])
			merge.push_back(interval);
		else
			merge.back()[1] = max(merge.back()[1], interval[1]);
	}
	return merge;
}

int main(){
	vector<vector<int>> input = {{1,3},{2,6},{8,10},{15,18}};
	//vector<vector<int>> input = {{1,4},{4,5}};
	vector<vector<int>> output = mergeIntervals(input);
	for(const auto& v:output){
		cout<<" [";
		for(const auto& i:v){
			cout<<i<<", ";
		}
		cout<<"\b\b],";
	}
}