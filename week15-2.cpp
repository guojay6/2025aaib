///week15-2.cpp
#include <stdio.h>
int helper(int n)
{
    int a[10]={};///統計表，裡面都是 0
    while(n>0){///剝皮法
        int now = n%10;///剝出一層皮皮
        a[now]++;
        if(a[now]>1) return 1;
        n= n/10;
    }
    return 0;
}
int main()
{
    int ans=0;///有幾的重複的數字
    for(int i=0; i<9999; i++){///0000..9999
        if(helper(i)==1) ans++;
    }
    printf("%d",ans);
}

