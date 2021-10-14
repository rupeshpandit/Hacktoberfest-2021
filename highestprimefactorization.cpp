#include<bits/stdc++.h>
using namespace std;

void primefactor(int n)
{
	int spf[100]={0};
for(int i=2;i<=n;i++)
	spf[i]=i;
for(int i=2;i<=n;i++)
{
	if(spf[i]==i)
	{
		for(int j=2*i;j<=n;j+=i)
		{
			if(spf[j]==j)
				spf[j]=i;
		}
	}
}
while(n!=1)
{
	cout<<spf[n]<<" ";
	n=n/spf[n];
}
}
int main()
{
int n;
cout<<"Enter the number of which you want to prime primefactor\n";
cin>>n;
primefactor(n);
cout<<endl;
return 0;	
}
