#include <bits/stdc++.h>
//https://khmt.uit.edu.vn/wecode/truonganpn/assignment/31/132

using namespace std;

int main()
{
    long long a,b;
    int ans=0;
    cin>>a>>b;
    if (0<=a && a<=7 && 0<=b && b<=7) {
        if (max(a,b)==6 && abs(a-b)>=2) ans=1;
        if (max(a,b)>6 && abs(a-b)==2) ans=1;
        if (max(a,b)==7 && min(a,b)==6) ans=1;
    }
    cout<<ans;
    return 0;
}
