//week10-4
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count =0;//�Ƥ@�U,�έp�̦h���A�O�X�{�X��
        int a[100]={};//�}�C�ŧi�A��[�`��total���X�{�X��
        for(int i=1;i<=n;i++){//�H����for�j��
            int total =0,now= i;//�[�_�ӵ��G�stotal
            while( now > 0){
                total+= now%10;
                now=now /10;
            }
            a[total]++;
            if(a[total] >max_count) max_count =a[total];
        }
    int ans=0;
    for(int i=0;i<100;i++){
        if(a[i]==max_count) ans++;
    }
    return ans;
    }
};
