#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        double sum=0;
        int count=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; ++i){
            cin>>arr[i];
        }
        for(int i=0; i<n; ++i){
            sum=sum+arr[i];
        }
        double div1=sum/n;
        int div2=sum/n;
        double diff=div1-div2;
        if(diff==0){
            for(int i=0; i<n; ++i){
                if(arr[i]>div2)
                    count++;
            }
            cout<<count<<endl;
        }
        else
            cout<<"-1"<<endl;
        
    }
    return 0;
}
