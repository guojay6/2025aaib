///week13-3.cpp
#include <stdio.h>
int gcd(int a, int b)///�Q�Ψ禡�I�s�禡�ѥL
{///�ѤjA�A�ѤGb
    printf("�Ѥja: %d �ѤGb: %d ",a,b);
    if(a==0) return b;///�J��0�A�t�@��O����
    if(b==0) return a;
    return gcd(b, a%b);
}
int main()
{
    printf("�п�J2�ӼƦr");
    int a,b;
    scanf("%d %d", &a ,&b);
    int ans =  gcd(a, b);
    printf("�L���̤j���]�ƬO:%d\n",ans);

}
