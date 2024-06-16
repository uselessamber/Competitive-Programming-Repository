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
#define fileio(name) freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout)
#define len(v) (int)v.size()
#define FS first
#define SC second
#define PB push_back
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
const bool open_file = false;
const int N = 1;
const int INF = 1e9 + 7;
const ll INF64 = 1e16 + 7;
int divceil(int x, int y){
    return 1 + ((x - 1) / y);
}
//stuff to declare

int main(){
    if (open_file){
        fileio("11614");
    }
    //main code
    // n(n+1)/2 --> 1 + ... + n
    ll n;
    // x(x+1) = 2n
    // x^2 + x - 2n = 0
    // 1 + 4*2n (n >= 0) --> 1 + 4*2n >= 1 > 0
    // -1-sqrt(1 + 4*2n)/2 | -1+sqrt(1+4*2n)/2
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        ll output = (-1.0 + sqrt((double)n * 8.0 + 1.0)) / 2.0;
        cout << output << "\n";
    }
}