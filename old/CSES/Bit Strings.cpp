#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <time.h>
#include <math.h>
#include <iomanip>
#define fileio(name) freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout)
#define len(v) (int)v.size()
#define FS first
#define SC second
#define PB push_back
#define LSOne(i) i & (-i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
const bool open_file = false;
const int N = 1e6 + 7;
const int INF = 1e9 + 7;
const double EPS = 1e-9;
const ll INF64 = 1e16 + 7;
int divceil(int x, int y){
    return 1 + ((x - 1) / y);
}
//stuff to declare

ll pow_mod(ll a, ll n, ll m){
    if (n == 0) return 1;
    if (n == 1) return a % m;
    if (n & 1) return (a % m * pow_mod(a, n - 1, m)) % m;
    else{
        ll temp = pow_mod(a, n >> 1, m);
        return (temp * temp) % m;
    }
}

int main(){
    if (open_file){
        fileio("file");
    }
    //main code
    ll n;
    cin >> n;
    cout << pow_mod(2, n, 1e9 + 7);
}