//leetcode 2033.minimun operation to Make a uni-value Grid
class Solution {
public:                                                 //grid[i][j]
    int minOperations(vector<vector<int>>& grid, int x) {
        int M=grid.size(),N=grid[0].size(),MN=M*N;
        vector<int>a(MN);//C++���}�Ca�j�p�OM*N
            for(int i=0;i<M;i++){//����I
                for(int j=0;j<N;j++){//�k��j
                    int k=i*N+j;//��촫��
                    a[k]= grid[i][j];//���Ӫ��}�C�A��Ja[]
                }

        } //�e���A��grid[i][j]�����
        sort(a.begin(),a.end());//�Ʀr�j�p�A��J�}�C
        int mid=a[MN/2];
        int ans=0;
        for(int k=0;k<MN;k++){
                int diff=abs(mid-a[k]);
                if(diff%x !=0) return-1;
                ans+=diff/x;


            }
            return ans;
    }
};
