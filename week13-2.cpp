///week13-2.cpp
///衡程そ计
#include <stdio.h>
int main()
{
    int a =51,b =68;
    int ans = 1;
    for(int i=1; i<=a; i++){
        if(a%i==0 && b%i==0 ) ans = i;
    }
    printf("т%d%d程そ计: %d\n",a,b, ans);
    printf("%d%D だ跑Θ %d%d\n",a,b,    a/ans, b/ans);

    }

