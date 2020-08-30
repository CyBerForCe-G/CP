#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
#define maxn 2000005
#define PI 3.1415926535
#define all(x) x.begin(),x.end()
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void CyBerForCe()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    cout<<s[n-1];
    cout<<"\n";
}
signed main()
{
    speedUp
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif
    
    int t;
    cin>>t;
    while(t--)
    CyBerForCe();
    return 0;
}