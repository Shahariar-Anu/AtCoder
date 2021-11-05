#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a,b,count=0;
    cin>>a>>b;
    for(int i=a; i<=b; i++)
        count++;
    cout<<count<<"\n";
    return 0;
}
