#include<bits/stdc++.h>
using namespace std;

class Pair{
	public :
		int min,max;
};

Pair minmax(int a[],int size){
	Pair obj1;
	int i;
	if(size%2!=0){
		obj1.max = a[0];
		obj1.min = a[0];
		i=1;
	}
	else{
		if(a[0]>a[1]){
			obj1.max = a[0];
			obj1.min = a[1];
		}
		else{
			obj1.max = a[1];
			obj1.min = a[0];
		}
	}
	while(i<size-1){
		if(a[i]>a[i+1]){
			if(obj1.max<a[i]){
				obj1.max = a[i];
			}
			else if(obj1.min>a[i+1]){
				obj1.min = a[i+1];
			}
		}
		else{
			if(obj1.max<a[i+1]){
				obj1.max = a[i+1];
			}
			else if(obj1.min>a[i]){
				obj1.min = a[i];
			}
		}
		i++;
	}
	return obj1;
}

int main(){
	int a[]={3,5,0,-1};
	int size = sizeof(a)/sizeof(a[0]);
	Pair final = minmax(a,size);
	cout<<"min : "<<final.min<<endl<<"max : "<<final.max;
}