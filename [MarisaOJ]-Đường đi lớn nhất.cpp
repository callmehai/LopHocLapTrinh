//#pragma GCC optimize ("O3")

#include <bits/stdc++.h>

using namespace std;
 
// ************ Define ************
#define i128 __int128_t
#define ll   long long
#define ull  unsigned long long
#define usi  unsigned int
#define pii  pair<int,int>
#define pll  pair<ll,ll>
#define plp  pair<ll,pll>
#define ppl  pair<pll,ll>
#define ppp  pair<pii,pii>
#define oo   1000111000
#define ooo  1000111000111000111
#define inf  0x3f
#define INF  4557430888798830399
#define fi   first
#define se   second
#define vt   vector
#define pb   push_back
#define el   cout<<'\n';

#define all(arr)  arr.begin(),arr.end()
#define bit(n, i) (((n) >> (i)) & 1)
#define BUG(x)    cerr << #x << " = " << x << '\n';
#define FPTU      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int mod = 1e9+7; //MODDDDDDDDDDDDD

template<class X, class Y>
bool maximize(X &x, const Y &y) {
    if (x < y) {
        x = y; return true;
    } else return false;
}

template<class X, class Y>
bool minimize(X &x, const Y &y) {
    if (x > y) {
        x = y; return true;
    } else return false;
}

template<class X, class Y>
void add(X &a, const Y b) {
    a+=b;
    if(a>=mod) a-=mod;
}

template<class X, class Y>
void sub(X &a, const Y b) {
    a-=b;
    if(a<0) a+=mod;
}

// =========> <3 VietHai1709 <3  <=======
ll a[5][5];
ll dq(int i,int j,int n,ll s){
    
//    cout<<i<<' '<<j<<' '<<s;el;
    if(i==n && j==n) return s;
    
    ll ans=s;
    if(i+1<=n) ans=max(ans,dq(i+1,j,n,s+a[i+1][j]));
    if(j+1<=n) ans=max(ans,dq(i,j+1,n,s+a[i][j+1]));
    
    return ans;
  
}
void solve(){
    int n = 4;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    cout<<dq(1,1,n,a[1][1]);
}
int main()
{
    
    FPTU;
 //   freopen("sample.inp", "r", stdin);
 //   freopen("sample.out", "w", stdout);
    int t=1;
//    cin>>t;
    while(t--){
        solve();
    }
    cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << " s.\n";

    return 0;
}
