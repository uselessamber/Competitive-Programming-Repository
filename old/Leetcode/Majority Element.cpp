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
#include <iomanip>
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
const int N = 1e6 + 7;
const int INF = 1e9 + 7;
const double EPS = 1e-9;
const ll INF64 = 1e16 + 7;
int divceil(int x, int y){
    return 1 + ((x - 1) / y);
}
//stuff to declare

class Solution{
public:
    int divceil(int x, int y){
        return 1 + ((x - 1) / y);
    }
    int majorityElement(vector <int> &nums){
        sort(nums.begin(), nums.end());
        int n = (int)nums.size();
        int lim = n >> 1;
        int curr = -1e9-7;
        int rep = 0;
        for (int i : nums){
            if (i != curr){
                curr = i;
                rep = 1;
            }else rep++;
            if (rep > lim) return curr;
        }
        return curr;
    }
};

Solution tester;

int main(){
    if (open_file){
        fileio("file");
    }
    //main code
    vector <int> nums = {3, 3, 4};
    cout << tester.majorityElement(nums);
}