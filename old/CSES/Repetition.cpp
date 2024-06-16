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
//stuff to declare
string inp;

int main(){
    if (open_file){
        fileio("file");
    }
    //main code
    cin >> inp;
    char c = 0;
    int c_len = 0, max_len = 0;
    for (int i = 0; i < len(inp); i++){
        if (inp[i] != c){
            c = inp[i];
            c_len = 1;
        }else{
            c_len++;
        }
        max_len = max(c_len, max_len);
    }
    cout << max_len;
}