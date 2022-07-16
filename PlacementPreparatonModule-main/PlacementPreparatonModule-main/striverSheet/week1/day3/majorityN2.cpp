#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int> nums) {
        int count=0;
        int candidate;
        for(int i=0; i<nums.size(); i++){
            if(count==0){
                candidate= nums[i];
            }
            if(candidate==nums[i]) count++;
            else count--;
        }
        return candidate;
    }
};

int main(){
    Solution obj;
    cout<<obj.majorityElement({2, 2, 1, 1, 1, 2, 2});
    return 0;
}