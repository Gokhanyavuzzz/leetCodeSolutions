#include <string>
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> numbers = {
           {'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C', 100}, {'D',500}, {'M',1000}
        };
        int num = 0;
        int size = s.size();
        for(int i = 0; i < size; i++){
            if(numbers[s[i]]< numbers[s[i+1]]){
                num -= numbers[s[i]];
            }
            else{
                num += numbers[s[i]];
            }
        }
        return num;
    }
};
