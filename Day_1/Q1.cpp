#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int s = nums[0];
        int f = nums[0];

        // Phase 1: Finding the intersection point of the two runners.
        do {
            s= nums[s];
            f = nums[nums[f]];
        } while (s != f);

        // Phase 2: Find the entrance to the cycle.
        s = nums[0];
        while (s != f) {
            s = nums[s];
            f = nums[f];
        }

        return s;
    }
};
