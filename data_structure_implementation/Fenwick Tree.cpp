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
const int N = 2e5 + 7;
const int INF = 1e9 + 7;
const double EPS = 1e-9;
const ll INF64 = 1e16 + 7;
int divceil(int x, int y){
    return 1 + ((x - 1) / y);
}
//stuff to declare

class FTree{
private:
    ll bit[2][N];
    int n;
public:
    void init(int size){ //n
        this->n = size;
        for (int i = 0; i <= n; i++){
            bit[0][i] = 0;
            bit[1][i] = 0;
        }
    }
    void update_point(int b, int u, ll v){ //log n
        int idx = u;
        while (idx <= n){
            bit[b][idx] += v;
            idx += LSOne(idx);
        }
    }
    void update_range(int l, int r, ll v){ //log n
        update_point(0, l, (n - l + 1) * v);
        update_point(0, r + 1, -(n - r) * v);
        update_point(1, l, v);
        update_point(1, r + 1, -v);
    }
    ll get_sum_on_bit(int b, int p){ //log n
        int idx = p; 
        ll ans = 0;
        while (idx > 0){
            ans += bit[b][idx];
            idx -= LSOne(idx);
        }
        return ans;
    }
    ll prefix_sum(int p){ //log n
        return get_sum_on_bit(0, p) - get_sum_on_bit(1, p) * (n - p);
    }
    ll get_sum_range(int l, int r){ //log n
        return prefix_sum(r) - prefix_sum(l - 1);
    }
};

int main(){
    if (open_file){
        fileio("file");
    }
    //main code
    
}