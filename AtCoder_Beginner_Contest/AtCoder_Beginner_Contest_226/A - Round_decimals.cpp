#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    float x;
    cin>>x;
    if(x-0.4999<=(int)x)
        cout<<(int)x;
    else
        cout<<(int)(x+1);
    return 0;
}
