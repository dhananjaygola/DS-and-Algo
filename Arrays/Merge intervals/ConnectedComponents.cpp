#include <bits/stdc++.h>
using namespace std;

bool isOverlap(int minS, int maxE, vector<int> interval){
	if(minS > interval[1] || maxE < interval[0])
		return false;
	
	return true;
}

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals){
	int n = intervals.size();
	vector<vector<int>> res;
	vector<bool> vis(n,false);
	for(int i = 0; i<n; ++i){
		if(vis[i])
			continue;
			
		vis[i] = true;
		int minS = intervals[i][0];
		int maxE = intervals[i][1];
		
		while(true){
			int cnt = 0;
			for(int j = 0; j<n; ++j){
				if(!vis[j] && isOverlap(minS, maxE, intervals[j])){
					vis[j] = true;
					minS = min(minS, intervals[j][0]);
					maxE = max(maxE, intervals[j][1]);
					++cnt;
				}
			}
			if(cnt == 0)
				break;
		}
		vector<int> interval = {minS, maxE};
		res.push_back(interval);
	}
	sort(res.begin(), res.end());
	return res;
}

int main(){
	vector<vector<int>> input = {{1,3},{2,6},{8,10},{15,18}};
	vector<vector<int>> output = mergeIntervals(input);
	for(const auto& v:output){
		cout<<" [";
		for(const auto& i:v){
			cout<<i<<", ";
		}
		cout<<"\b\b],";
	}
}