///week11-2,cpp
#include <stdio.h>

int addnum(int a,int b)///�ŧi2�ӰѼƪ��Ϊ��W�r
{///�e���O���/�禡���w�q
    printf("�{�b�i�J addnum() �禡�̡A a:%d b:%d\n", a, b);
    int x;
    x = a+ b;
    printf("��Ƭۥ[��A�o��ƭ�%d�Nreturn�^��\n",x);
    return x;///�^�ǵ����s�Ϊ��a��
}

int main()
{

    int ans =addnum(10, 30);///�ڭ̨ϥ�/�I�s���ۭq�禡5
    printf("%d",ans);
}
