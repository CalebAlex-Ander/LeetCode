#include <vector>
#include <unordered_map>


class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        std::vector<int> solution;
        for (int i{0}; i < nums.size(); i++){
            if (map.find(target - nums[i]) != map.end()){
                solution.push_back(i);
                solution.push_back(map[target - nums[i]]);
                return solution;
            }
            else{
                map[nums[i]] = i;
            }
        }
        return solution;
    }
};

int main(){
    return 0;
}
