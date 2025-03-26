//leetcode 2033.minimun operation to Make a uni-value Grid
class Solution {
public:                                                 //grid[i][j]
    int minOperations(vector<vector<int>>& grid, int x) {
        int M=grid.size(),N=grid[0].size(),MN=M*N;
        vector<int>a(MN);//C++的陣列a大小是M*N
            for(int i=0;i<M;i++){//左手I
                for(int j=0;j<N;j++){//右手j
                    int k=i*N+j;//單位換算
                    a[k]= grid[i][j];//把原來的陣列，放入a[]
                }

        } //前面，把grid[i][j]的資料
        sort(a.begin(),a.end());//數字大小，放入陣列
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
