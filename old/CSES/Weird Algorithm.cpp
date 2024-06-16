#include <iostream>
#define fileio(name) freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout)
using namespace std;
typedef long long ll;
const bool open_file = false;

int main(){
    if (open_file){
        fileio("file");
    }
    ll n;
    cin >> n;
    while (n > 1){
        cout << n << " ";
        n = ((n & 1)? 3 * n + 1 : n / 2);
    }
    cout << n;
}