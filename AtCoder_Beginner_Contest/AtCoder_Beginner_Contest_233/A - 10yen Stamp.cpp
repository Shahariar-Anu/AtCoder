#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int x,y;
    cin>>x>>y;
    if(x>y)
        cout<<"0";
    else if((y-x)%10==0)
        cout<<(y-x)/10;
    else if((y-x)%10 != 0)
        cout<<(y-x)/10+1;
    return 0;
}
