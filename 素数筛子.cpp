素数筛子

打印出1-100000内所有的素数

假定所有数都是素数，然后从头遍历把素数的所有倍数（2，3，4…n倍）筛掉，则剩下的为真素数。维护一个bool类型数组，false表示没被筛掉，true表示被筛掉了。

#include<stdio.h>
int main() {
    bool num[100001] = {false};
    for(int i = 2; i <= 100000; i++){
        if(!num[i]){
            printf("%d\n",i);
            for(int j = 2 * i; j < 100000; j = j + i)
                num[j] = true;
        }
    }
}
