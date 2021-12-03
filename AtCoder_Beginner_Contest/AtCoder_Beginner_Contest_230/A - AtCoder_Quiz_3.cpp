#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    if(n<10)
        cout<<"AGC00"<<n<<"\n";
    else if(n<42)
        cout<<"AGC0"<<n<<"\n";
    else
        cout<<"AGC0"<<n+1<<"\n";
    return 0;
}

