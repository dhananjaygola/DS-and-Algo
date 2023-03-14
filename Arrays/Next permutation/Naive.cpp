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
	vector<int> input = {3,1,2};
	vector<int> b;
	vector<vector<int>> output;
	allPermutations(0,input,output);
	sort(output.begin(), output.end()); // sort the output to arrange all permutations in lexicographical order
	auto itr = find(output.begin(), output.end(), input);
	int a = itr - output.begin();
	if(a == output.size()-1)
		b = output[0];
	else
		b = output[a+1];
	cout<<"[ ";
	for(auto& i:b){ cout<<i<<", ";}
	cout<<"\b\b ]";
}