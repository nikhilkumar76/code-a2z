#include <bits/stdc++.h>
using namespace std;

int largestPerimeter(vector<int>& nums) {
    sort(nums.rbegin(), nums.rend());
    for (int i = 0; i < nums.size() - 2; i++) {
        if (nums[i] < nums[i+1] + nums[i+2])
            return nums[i] + nums[i+1] + nums[i+2];
    }
    return 0;
}

int main() {
    vector<int> nums = {2,1,2};
    cout << largestPerimeter(nums) << endl;
    return 0;
}
