计算质因子个数

计算数字 n 中有因子 a 的个数普通计算

    int f(int n, int a) {
        int ans = 0;
        while(n % a == 0) {
            ans++;
            n /= a;
        }
        return ans;
    }



进阶：计算数字 !n 中有因子 a 的个数快速计算

有一个公式:利用这个公式可以把时间复杂度降到O(nlogn)

    !n 中有(n/p + n/p^2 + n/p^3 + .....)个质因子a。(其中除法向下取整)

其中除法向下取整

    int F(int n, int a) {
        int ans = 0;
        while(n) {
            ans += n / p;
            n /= p;
        }
        return ans;
    }



递归版：!n 中有因子 a 的个数快速计算

    int F(int n, int a) {
        if(n < p)   return 0;
        return n / p + F(n / p , a);
    }


