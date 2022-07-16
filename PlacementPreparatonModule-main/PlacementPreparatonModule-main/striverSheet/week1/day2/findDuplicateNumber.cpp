#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow= nums[0];
        int fast= nums[0];
        do{
            slow= nums[slow];
            fast= nums[nums[fast]];
        }while(slow!=fast);
        fast= nums[0];
        while(slow!=fast){
            slow= nums[slow];
            fast= nums[fast];
        }
        return fast;
    }
};

int main(){
    vector<int> vec= {2, 5, 9, 6, 9, 3, 8, 9, 7, 1};
    Solution obj;
    cout<<obj.findDuplicate(vec);
    return 0;
}