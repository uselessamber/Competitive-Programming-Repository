#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <unordered_map>
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
    vector<int> majorityElement(vector<int>& nums){
        int candidate[2] = {(int)-1e9-7, (int)-1e9-7}, count[2] = {0, 0};
        vector<int> output;
        int n = (int)nums.size(), lim = n / 3;
        int hash_length = 0;
        for (int val : nums){
            bool fitted = false;
            for (int i = 0; i < 2; i++){
                if (candidate[i] == val){
                    count[i]++;
                    fitted = true;
                    break;
                }
            }
            if (!fitted){
                for (int i = 0; i < 2; i++){
                    if (count[i] <= 0){
                        candidate[i] = val;
                        count[i] = 1;
                        fitted = true;
                        break;
                    }
                }
            }
            if (!fitted){
                for (int i = 0; i < 2; i++) count[i]--;
            }
        }
        for (int i = 0; i < 2; i++){
            if (count[i] > 0){
                int true_count = 0;
                for (int val : nums){
                    true_count += (val == candidate[i])? 1 : 0;
                    if (true_count > lim){
                        output.push_back(candidate[i]);
                        break;
                    }
                }
            }
        }
        return output;
    }
};

Solution tester;

int main(){
    if (open_file){
        fileio("file");
    }
    //main code
    vector <int> input = {2,1,1,3,1,4,5,6};
    vector <int> output = tester.majorityElement(input);
    for (int i : output){
        cout << i << " ";
    }
}