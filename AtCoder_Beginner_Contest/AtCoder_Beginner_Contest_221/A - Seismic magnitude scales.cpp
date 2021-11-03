#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int a,b;
    cin>>a>>b;
    if(a==b)
        cout<<"1\n";
    else if(a-b==1)
        cout<<"32\n";
    else if(a-b==2)
        cout<<"1024\n";
    else if(a-b==3)
        cout<<"32768\n";
    else if(a-b==4)
        cout<<"1048576\n";
    else if(a-b==5)
        cout<<"33554432\n";
    else if(a-b==6)
        cout<<"1073741824\n";
    return 0;
}
