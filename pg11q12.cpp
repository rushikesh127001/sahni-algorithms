#include<iostream>
using namespace std;

void supersetperm(int arr[],int cur,int n){
	if(cur==n){
		for(int i=0;i<n;i++){
			if(arr[i]!=0) cout<<arr[i]<<"\t";
		}
		cout<<endl;
	}
	else{
		for(int i=cur;i<n;i++){
			int temp=arr[i];
			arr[i]=0;
			supersetperm(arr,cur+1,n);
			arr[i]=temp;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=i+1;
	}
	supersetperm(arr,0,n);
	return 0;
}
