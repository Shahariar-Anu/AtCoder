#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    float x;
    int a;
    cin>>x;
    a=x*10;
    a=a%10;
    if((a==0) || (a==1) || (a==2))
        cout<<(int)x<<"-"<<"\n";
    else if(a==3 || a==4 || a==5 || a==6)
        cout<<(int)x<<"\n";
    else if((a==7) || (a==8) || (a==9))
        cout<<(int)x<<"+"<<"\n";
    return 0;
}
