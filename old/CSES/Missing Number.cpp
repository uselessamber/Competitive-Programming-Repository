#include <iostream>
#define fileio(name) freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const bool open_file = false;

int main(){
    if (open_file){
        fileio("file");
    }
    ll n;
    ll ans = 0;
    cin >> n;
    for (int i = 0; i < n - 1; i++){
        int inp;
        cin >> inp;
        ans += inp;
    }
    cout << ((n * (n + 1)) / 2) - ans;
}