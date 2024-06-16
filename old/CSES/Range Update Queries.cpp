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
const bool open_file = false;
const int N = 2e5 + 7;
const int INF = 1e9 + 7;
const double EPS = 1e-9;
const ll INF64 = 1e16 + 7;
int divceil(int x, int y){
    return 1 + ((x - 1) / y);
}
//stuff to declare

// https://vnoi.info/wiki/algo/data-structures/fenwick.md
class FTree{
private:
    ll bit[2][N];
    int n;
public:
    void init(int size){
        this->n = size;
        for (int i = 0; i <= n; i++){
            bit[0][i] = 0;
            bit[1][i] = 0;
        }
    }
    void update_point(int b, int u, ll v){
        int idx = u;
        while (idx <= n){
            bit[b][idx] += v;
            idx += LSOne(idx);
        }
    }
    void update_range(int l, int r, ll v){
        update_point(0, l, (n - l + 1) * v);
        update_point(0, r + 1, -(n - r) * v);
        update_point(1, l, v);
        update_point(1, r + 1, -v);
    }
    ll get_sum_on_bit(int b, int p){
        int idx = p; 
        ll ans = 0;
        while (idx > 0){
            ans += bit[b][idx];
            idx -= LSOne(idx);
        }
        return ans;
    }
    ll prefix_sum(int p){
        return get_sum_on_bit(0, p) - get_sum_on_bit(1, p) * (n - p);
    }
    ll get_sum_range(int l, int r){
        return prefix_sum(r) - prefix_sum(l - 1);
    }
} ft;
int n, q;

int main(){
    if (open_file){
        fileio("file");
    }
    //main code
    cin >> n >> q;
    ft.init(n);
    for (int i = 1; i <= n; i++){
        int v;
        cin >> v;
        ft.update_range(i, i, v);
    }
    while (q--){
        int state;
        cin >> state;
        if (state == 1){
            int l, r, u;
            cin >> l >> r >> u;
            ft.update_range(l, r, u);
        }else{
            int p;
            cin >> p;
            cout << ft.get_sum_range(p, p) << "\n";
        }
    }
}