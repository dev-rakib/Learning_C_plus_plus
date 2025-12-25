#include <iostream>
#include <vector>
using namespace std;


class Solution {
    public:
    int singleNumber(vector<int> &nums){
        int ans = 0;
        
        for(int val : nums){
            ans ^= val;
        }
        return ans;
    }
};
int main(){
    vector <int> nums = {2,2,1};
    Solution s1;
    cout<<s1.singleNumber(nums)<<endl;
    return 0;
}