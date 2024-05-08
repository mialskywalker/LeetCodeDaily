#include <iostream>
#include <vector>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
}

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int firstIdx = 0;
        int secondIdx = 1;
        vector<int> result;
        while (true) {
            if (firstIdx == nums.size() - 1) {
                break;
            }
            if (nums[firstIdx] + nums[secondIdx] == target) {
                result.push_back(firstIdx);
                result.push_back(secondIdx);
                break;
            }
            secondIdx++;
            if (secondIdx == nums.size()) {
                firstIdx++;
                secondIdx = firstIdx + 1;
            }
        }
        return result;
    }
};