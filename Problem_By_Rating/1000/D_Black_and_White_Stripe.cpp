//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

typedef unsigned long long ull;
typedef double long  dll;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<dll> vdl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;


#define forn(n) for(int i = 0; i < (n); i++)
#define L(i, j, k) for(int i = (j); i <= (k); ++i)
#define R(i, j, k) for(int i = (j); i >= (k); --i)
#define uniq(x) sort(all(x)); (x).resize(unique(all(x)) - (x).begin())
#define PB push_back
#define F first
#define S second
#define MP(a,b) make_pair(a,b)
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
#define sqr(a) ((a) * (a))

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

#define hiddenclue0() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(fr) cout.unsetf(ios::floatfield); cout.precision((fr)); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);


//cout << (solve() ? "YES" : "NO") << "\n";




void solve(){
    int n, k, b = 0, w = 0, mn = INT_MAX;
    cin >> n >> k;
    
    string s;
    cin >> s;
    forn(n){
        if(i >= k){
            mn = min(w, mn);
            if(s[i-k] == 'B' )
            b--;
            else
            w--;
        }
        if(s[i] == 'B')
        b++;
        else
        w++;
        
    }
    cout << min(w, mn) << endl;
}

int main()
{
    hiddenclue0();
    fraction(10);
    int x;
    cin>>x;
    for(int i=1; i<=x; i++){
        //cout<<"Case "<<i<<": ";
        solve();
    }
  
    //solve();
    return 0;
}