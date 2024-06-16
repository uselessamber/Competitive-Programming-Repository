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
#define LSOne(i) i & (-i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
const bool open_file = true;
const int N = 1e3 + 7;
const int INF = 1e9 + 7;
const double EPS = 1e-9;
const ll INF64 = 1e16 + 7;
int divceil(int x, int y){
    return 1 + ((x - 1) / y);
}
//stuff to declare
string card[N];
bool taken[N];
map <string, int> mp;
int n, t;
int unknown = 0;
int available = 0;
int known_pairs[N];

int main(){
    if (open_file){
        fileio("file");
    }
    //main code
    cin >> n >> t;
    unknown = n / 2;
    available = n;
    for (int i = 0; i < t; i++){
        int u, v;
        string c1, c2;
        cin >> u >> v >> c1 >> c2;
        card[u] = c1;
        card[v] = c2;
    }
}