// leetcode 3375.Mininm Operation to make array values equal to K
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int a[101]={};//�}�C�ŧi�A�̭�����0
        int N= nums.size();
        for(int i=0;i<N;i++){
            int now =nums[i];
            if(now<k) return-1;//���p����?���N���ѤF���|�ܦ�K
            a[now]++;//�{�b���Ʀr+1
        }
        int ans=0;
        for(int now=k+1; now<=100; now++){//�n�d��[now]���X�����P����
            if (a[now]>0) ans++;
        }
        return ans;
    }
};
