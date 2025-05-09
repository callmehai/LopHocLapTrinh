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
vector<pair<int,int>> knight = {{-1,-2},{-1,2},{1,-2},{1,2},{-2,-1},{-2,1},{2,-1},{2,1}};

int n,m;
int ans[11][11]; // o [i][j] duoc tham tai buoc thu bao nhieu

bool checked(int i,int j){
    return i>0 && j>0 && i<=n && j<=m && ans[i][j]==0 ;
}
bool dq(int i,int j,int step){
    
    ans[i][j]=step;
    
    if(step==n*m) return 1;
    
    // thu di sang 8 huong
    for(pii k : knight){
        int u = i+k.first;
        int v = j+k.second;
        
        // (i,j) -> (u,v)
        
        if(checked(u,v)){
            bool ok = dq(u,v,step+1);
            
            if(ok) return 1;
            
            ans[u][v]=0;
        }
    }
    
    return 0;
}
void solve(){
    cin>>n>>m;
    dq(1,1,1);
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) cout<<ans[i][j]<<' ';
        el;
    }
}
int main()
{
    
    FPTU;
    int t=1;
//    cin>>t;
    while(t--){
        solve();
    }
    cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << " s.\n";

    return 0;
}
