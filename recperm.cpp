#include <iostream>

using namespace std;
void swap(int *a,int *b){
    int *temp=a;
    a=b;
    b=temp;
}
void perm(int a[],int k,int n){
    if(k==n)
    {
        for(int i=0;i<n;i++){
            cout<<a[i]<<"\t";
            
        }
        cout<<endl;
    }
    else{
        for(int i=k;i<n;i++){
            swap(a[k],a[i]);
            perm(a,k+1,n);
            swap(a[k],a[i]);
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    perm(arr,0,n);
    
    
    return 0;
}
