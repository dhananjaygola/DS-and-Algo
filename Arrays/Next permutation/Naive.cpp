#include <bits/stdc++.h>
using namespace std;

void allPermutations(int index, vector<int> &input, vector<vector<int>> &next){
	if(index == input.size()){
		next.push_back(input);
		return;
	}
	for(int i = index; i<input.size(); ++i){
		swap(input[index], input[i]);
		allPermutations(index+1, input, next);
		swap(input[index], input[i]);
	}
}

int main(){
	vector<int> input = {2,1,3};
	vector<int> b;
	vector<vector<int>> output;
	allPermutations(0,input,output);
	auto itr = find(output.begin(), output.end(), input);
	int a = itr - output.begin();
	b = output[a+1];
	cout<<"[ ";
	for(auto& i:b){ cout<<i<<", ";}
	cout<<"\b\b ]";
}