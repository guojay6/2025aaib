//week11-4
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans =0;//�j��e��ans�O0
        for(int i=0; i<nums.size(); i++){
            int now =nums[i];//�{�b�n�B�z num[i]
            //Q: �p�󪾹Dnum[i]�O�X���
            int digits =0;
            while(now>0){
                digits++;
                now=now /10;
            }
            if(digits%2==0) ans++;
        }
        return ans;
    }
};
