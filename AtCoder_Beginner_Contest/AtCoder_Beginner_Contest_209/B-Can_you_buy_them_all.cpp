#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,x,sum=0;
    cin>>n>>x;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(i%2==0)
        {
            sum=sum+a[i]-1;
        }
        else
            sum+=a[i];
    }
    if(sum>x)
        cout<<"No"<<"\n";
    else
        cout<<"Yes"<<"\n";

}
