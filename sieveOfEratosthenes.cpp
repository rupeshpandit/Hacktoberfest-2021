#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int checkArray[n];
    for(int k=0;k<n;k++){
        checkArray[k]=0;
    }
    int i=2;
    while(i*i<n&&checkArray[i]==0){
        for(int j=i*i;j<n;j++){
            if(j%i==0){
                checkArray[j]=1;
            }
            else checkArray[j]=0;
        }
        i++;
    }
    for(int k=0;k<n;k++){
        if(checkArray[k]==0){
            cout<<k<<endl;
        }
    }
    return 0;
}