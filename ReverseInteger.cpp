#include <string>
#include <cmath>

class Solution {
public:
    int reverse(int x) {
        int sign = x < 0 ? -1 : 1;
        std::string str = std::to_string(x);
        if (sign < 0){
            str = str.substr(1);
        }
        for (int i{0}; i < str.length() / 2; i++){
            std::swap(str[i], str[str.length() - i - 1]);
        }
        long int answer = sign * std::stol(str);
        int final =  answer > INT32_MAX || sign * std::stol(str) < INT32_MIN ? 0 : answer;
        return final;
    }
};


