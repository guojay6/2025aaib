//week05-3.cpp
///leetcode 2026.Divide Array Into Equal Paiys
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501]={};//�}501�j�p���}�C�A������0
        int odd=0;
        for(int i=0; i<nums.size();i++) {
            int now=nums[i];//�{�b�B�z���Ʀr
            a[now]++;//now�a
            if(a[now] % 2 == 0) odd--;
            else odd++;
        }
        if(odd==0)return true;
        else return false;
    }
};
