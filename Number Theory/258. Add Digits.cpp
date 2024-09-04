class Solution {
public:
    int addDigits(int n) {
        if(n==0){
            return 0;
        }else if(n%9 == 0) {
            return 9;
        }else{
            return n%9;
        }
    }
};

// Brute Force O(n)
class Solution {
public:
        if (n < 10) {
            return n;
        }
        string num = to_string(n);
        while (stoi(num) > 9) {
            int digsum = 0;
            for (char digit : num) {
                digsum += digit - '0';
            }
            num = to_string(digsum);
        }
        return stoi(num);
    }
};