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
const int N = 2e5 + 7;
const int INF = 1e9 + 7;
const ll INF64 = 1e16 + 7;
//stuff to declare
int n;
int a[N];

int main(){
    if (open_file){
        fileio("file");
    }
    //main code
    cin >> n;
    ll ans = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i > 0){
            ans += max(0, a[i - 1] - a[i]);
            a[i] = max(a[i - 1], a[i]);
        }
    }
    cout << ans;
}