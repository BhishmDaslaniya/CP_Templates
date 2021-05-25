/*
    author : Bhishm Daslaniya
    "Make it work, make it right, make it fast." 
                                                – Kent Beck  
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define PI 3.141592653589793238462
const int mod = 1e9+7 ;

//------------------------<Debugging Start>---------------------------------
#ifndef ONLINE_JUDGE
#define debug(x) cerr << __LINE__ <<" : " << #x <<" = "; print_me(x); cerr << endl;
#else
#define debug(x)
#endif

void print_me(ll t) {cerr << t;}
void print_me(int t) {cerr << t;}
void print_me(string t) {cerr << t;}
void print_me(char t) {cerr << t;}
void print_me(lld t) {cerr << t;}
void print_me(double t) {cerr << t;}
void print_me(ull t) {cerr << t;}

template <class T, class V> void print_me(pair <T, V> p);
template <class T> void print_me(vector <T> v);
template <class T> void print_me(set <T> v);
template <class T, class V> void print_me(map <T, V> v);
template <class T> void print_me(multiset <T> v);
template <class T, class V> void print_me(pair <T, V> p) {cerr << "{"; print_me(p.ff); cerr << ","; print_me(p.ss); cerr << "}";}
template <class T> void print_me(vector <T> v) {cerr << "[ "; for (T i : v) {print_me(i); cerr << " ";} cerr << "]";}
template <class T> void print_me(set <T> v) {cerr << "[ "; for (T i : v) {print_me(i); cerr << " ";} cerr << "]";}
template <class T> void print_me(multiset <T> v) {cerr << "[ "; for (T i : v) {print_me(i); cerr << " ";} cerr << "]";}
template <class T, class V> void print_me(map <T, V> v) {cerr << "[ "; for (auto i : v) {print_me(i); cerr << " ";} cerr << "]";}

//------------------------<Debugging End>---------------------------------

ll DoMod(ll n){
    return ((n%mod)+mod)%mod;
}

ll powermod(ll a, ll b,ll M) {
    if(b==0)
       return 1;
    if(b==1)
       return a;
    ll h=powermod(a,b/2,M);
    if(b%2==0)
        return ( h * h ) % M;
    else
        return ( ( ( h * h ) % M ) * a ) % M;
}

ll modinv(ll a, ll b){
    ll b0 = b, t, q;
    ll x0 = 0, x1 = 1;
    if (b == 1) return 1;
    while (a > 1){
        q = a / b;
        t = b, b = a % b, a = t;
        t = x0, x0 = x1 - q * x0, x1 = t;
    }
    if (x1 < 0) {
        x1 += b0;
    }
    return x1;
}

int main(){

    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("D:\\CP_Files[DND]\\input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("D:\\CP_Files[DND]\\output.txt", "w", stdout);
        // for writing errors to errors.txt
        freopen("D:\\CP_Files[DND]\\errors.txt", "w", stderr);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;
    cin>>t;
    for(int test = 1; test <= t ; test++){
        cout<<"Case #"<<test<<": ";

    }
}

