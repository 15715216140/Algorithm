快速幂求解：ans = （a ^ b） % m
基于二分思想，时间复杂度为O（logb）;
当b奇数，ans = ans * (a ^ (b - 1) % m);
当b偶数，ans = (a ^ (b / 2) % m) * (a ^ (b / 2) % m);
当b为零，退出。

#include <iostream>
#include <bitset>
using namespace std;
long long fastPower(long long a, long long b, long long m){
    long long ans = 1;
    while(b > 0) {
        if(b % 2 )   ans = ans * a % m;  // b & 1 == b % 2
        a  = a * a % m;
        b /= 2;                        // b /= 2 == b >>= 1
    }
    return ans;
}
int main() {
    cout << fastPower(234, 325423534, 432533) << endl;
}

递归版：
#include <iostream>
#include <bitset>
using namespace std;
long long fastPower(long long a, long long b, long long m){
    if(b == 0)  return 1;
    if(b % 2 == 1)  return a * fastPower(a, b - 1, m) % m;
    else  {
        long long mul = fastPower(a, b/2, m);
        return mul * mul % m;
    }
}
int main() {
    cout << fastPower(234, 325423534, 432533) << endl;
}

