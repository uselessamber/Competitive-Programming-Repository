#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#define fileio(name) freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout)
#define len(v) (int)v.size()
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const bool open_file = false;
const int N = 1;
const int INF = 1e9 + 7;
const ll INF64 = 1e16 + 7;
int divceil(int x, int y){
    return 1 + ((x - 1) / y);
}
//stuff to declare
int x, y;
ll ans;

int main(){
    if (open_file){
        fileio("file");
    }
    //main code
    int t;
    cin >> t;
    while (t--){
        cin >> y >> x;
        ll layer = max(x, y) - 1;
        ans = layer * layer;
        if ((layer + 1) & 1){
            ans += (min(x, y) == x)? x : layer + 1 + (layer + 1 - y);
        }else{
            ans += (min(x, y) == y)? y : layer + 1 + (layer + 1 - x);
        }
        cout << ans << "\n";
    }
}