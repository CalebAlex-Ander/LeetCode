//
// Created by Caleb Alexander on 10/26/2020.
//
/*
class Solution:
        def reverse(self, x: int) -> int:
if x == 0:
return 0
negative = False
if not (x + abs(x)):
negative = True
x = str(x)
if negative:
strForm = x[1::]
strForm = strForm[::-1]
else:
strForm = x[::-1]

answer = (int(strForm) * -1) if negative else int(strForm)

if abs(answer) > 2**31:
return 0
else:
return answer
*/

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


