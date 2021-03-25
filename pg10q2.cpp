#include<iostream>

using namespace std;
//prog can b even solved using binary digit cal with n..if n=3 i.e count till 2^3 ...using heap recurisve algo here...
void boolperm(int arr[],int cur,int n){
	if(cur==n){
		for(int i=0;i<n;i++){
			cout<<arr[i]<<"\t";
		}
		cout<<endl;
	}
	else{
		int i=0;
		//this works becoz we want this loop to iterate overall all possible vals for a digit..in Recursive perm algo its was digits 
		//1 2 3 4 therfore loop overthem...here only two possible 0 or 1...do boolpem with 0 then with 1...simpllll
		while(i<2){
			arr[cur]=i;
			boolperm(arr,cur+1,n);
			i++;
			
		}
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=0;
	}
	
	boolperm(arr,0,n);
	
	return 0;
}

