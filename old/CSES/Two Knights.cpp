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
int n;
int pre_ans[] = {0, 6, 28, 96};

int main(){
    if (open_file){
        fileio("file");
    }
    //main code
    cin >> n;
    for (int i = 1; i <= min(4, n); i++){
        cout << pre_ans[i - 1] << "\n";
    }
    for (int i = 5; i <= n; i++){
        ll area = i * i;
        ll case1 = 4ll * (area - 3ll);
        ll case2 = 8ll * (area - 4ll);
        ll case3 = 4ll * (area - 5ll);
        ll case4 = 4ll * ((ll)i - 4ll) * (area - 5ll);
        ll case5 = 4ll * ((ll)i - 4ll) * (area - 7ll);
        ll case6 = ((ll)i - 4ll) * ((ll)i - 4ll) * (area - 9ll);
        cout << (case1 + case2 + case3 + case4 + case5 + case6) / 2 << '\n';
    }
}