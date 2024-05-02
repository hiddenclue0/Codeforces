
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


const int N = 10e6+123;
long long  fact[N];
long long Fact(long long n){
    if(n == 1)
    return 1;
    if(fact[n] != 0)
    return fact[n];
    fact[n] = (n*Fact(n-1))%MOD;
    return fact[n];
}

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


int manhattanDis(int x, int y, int x1, int y1 ){
    return (abs(x-x1)+abs(y-y1));
}
int manhattanSum(int n){
    if(n&1)
    return n/2;
    else
    return (((n/2)+1 - (n/2))+1);
}

vi prime_factor(int n){
    vi v;
    for(int i=2; i*i<=n; i++){
        while(n%i == 0){
            v.PB(i);
            n/=i;
        }
    }
    if(n>1)
    v.PB(n);
    
    return v;
}


vi sieve(int n){
    vector<bool> isPrime(n+1, 1);
    isPrime[0] = isPrime[1] = 0;
    vi prime;
    for(int i=2; i*i <= n; i++){
        if(isPrime[i]){
            for(int j = i * i; j<n; j+=i){
                isPrime[j] = false;
            }
        }
    }
    for(int i=2; i<n; i++)
    if(isPrime[i-2] && isPrime[i])
    prime.PB(i-2);
    return prime;
}

#define hiddenclue0() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(fr) cout.unsetf(ios::floatfield); cout.precision((fr)); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);


//cout << (solve() ? "YES" : "NO") << "\n";




void solve(){
    ll n, p = 2;
    cin >> n;

    while(p <= n){
        p*=2;
    }
    cout << p/2 << endl;
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