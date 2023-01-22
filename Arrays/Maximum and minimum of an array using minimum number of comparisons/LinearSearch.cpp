#include<bits/stdc++.h>
using namespace std;

class Pair{
	public:
		int min,max;
		Pair(int a,int b){
		if(a>b){
			min = b;
			max = a;
		}
		else {
			min = a;
			max = b;
		}
	}
};

Pair minmax(int a[],Pair &obj1,int size){
	for(int i=2;i<size;++i){
		if(a[i]<obj1.min){
			obj1.min=a[i];
		}
		else if(a[i]>obj1.max){
			obj1.max=a[i];
		}
	}
	return obj1;
}

int main(){
	int a[]={2,0,6,5,-8};
	int size = sizeof(a)/sizeof(a[0]);
	if(size==1){
		cout<<"min : "<<a[0]<<endl<<"max : "<<a[0];
		return 0;
	}
	Pair obj1(a[0],a[1]);
	if(size==2){
		cout<<"min : "<<obj1.min<<endl<<"max : "<<obj1.max;
		return 0;
	}
	Pair final = minmax(a,obj1,size);
	cout<<"min : "<<final.min<<endl<<"max : "<<final.max;
}