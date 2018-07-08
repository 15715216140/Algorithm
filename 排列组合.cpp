排列组合

从n种情况选m个选择，有多少中可能：

C n m

边乘边除法

    int C(int n, int m) {
        int ans = 1;
        for(int i = 1; i <= m; i++) 
        ans = ans * (n - m + i) / i;
        return ans;
    }




