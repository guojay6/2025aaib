///week15-2.cpp
#include <stdio.h>
int helper(int n)
{
    int a[10]={};///�έp��A�̭����O 0
    while(n>0){///��֪k
        int now = n%10;///��X�@�h�֥�
        a[now]++;
        if(a[now]>1) return 1;
        n= n/10;
    }
    return 0;
}
int main()
{
    int ans=0;///���X�����ƪ��Ʀr
    for(int i=0; i<9999; i++){///0000..9999
        if(helper(i)==1) ans++;
    }
    printf("%d",ans);
}

