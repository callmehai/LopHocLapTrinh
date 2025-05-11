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
bool hang[11]; // hang[i] da duoc su dung hay chua
map<int,bool> chinh; // duong cheo chinh co hieu la i da duoc dung hay chua
bool phu[50]; // duong cheo phu co tong la i da duoc dung hay chua


int dq(int i,int n){
    
    if(i==n+1){
        return 1;
    }
    
    int ans=0;
    for(int j=1;j<=n;j++) if(hang[j]==0 && chinh[i-j]==0 && phu[i+j]==0){
        hang[j]=1;
        chinh[i-j]=1;
        phu[i+j]=1;
        
        ans+=dq(i+1,n);
        
        hang[j]=0;
        chinh[i-j]=0;
        phu[i+j]=0;
    }
    
    return ans;
}
void solve(){
    int n;
    cin>>n;
    cout<< dq(1,n);
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
