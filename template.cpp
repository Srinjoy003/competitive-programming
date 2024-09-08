#include <bits/stdc++.h>

using namespace std;
#define llt long long int
#define MOD 1000000007
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;

void _print(llt t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


llt gcd(llt a, llt b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
llt expo(llt a, llt b, llt mod) {llt res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(llt a, llt b, llt*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); llt x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
llt mminv(llt a, llt b) {llt arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
llt mminvprime(llt a, llt b) {return expo(a, b - 2, b);}
bool revsort(llt a, llt b) {return a > b;}
llt combination(llt n, llt r, llt m, llt *fact, llt *ifact) {llt val1 = fact[n]; llt val2 = ifact[n - r]; llt val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<llt> sieve(int n) {int*arr = new int[n + 1](); vector<llt> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
llt mod_add(llt a, llt b, llt m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
llt mod_mul(llt a, llt b, llt m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
llt mod_sub(llt a, llt b, llt m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
llt mod_div(llt a, llt b, llt m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
llt phin(llt n) {llt number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (llt i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
llt getRandomNumber(llt l, llt r) {return uniform_int_distribution<llt>(l, r)(rng);} 


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    llt t;
    cin >> t;

    while (t--) {
        llt n;
        cin >> n;
        vector<llt> A(n);

        for (llt i = 0; i < n; i++) {
            cin >> A[i];
        }

        cout << count << endl;
    }

    return 0;
}
