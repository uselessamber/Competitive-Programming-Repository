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
const int N = 1e6 + 7;
const int INF = 1e9 + 7;
const ll INF64 = 1e16 + 7;
int divceil(int x, int y){
    return 1 + ((x - 1) / y);
}
//stuff to declare
int n;
int a[N];

int main(){
    if (open_file){
        fileio("file");
    }
    //main code
    cin >> n;
    if (n == 1){
        cout << "1";
        return 0;
    }
    if (n <= 3){
        cout << "NO SOLUTION";
        return 0;
    }
    if (n == 4){
        cout << "2 4 1 3";
        return 0;
    }
    int x = 1;
    int y = divceil(n, 2) + 1;
    for (int i = 1; i <= n; i++){
        if (i & 1){
            cout << x << " ";
            x += 1;
        }else{
            cout << y << " ";
            y += 1;
        }
    }
}