class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)
            return 1;
        int current=9;
        int start=9;
        int ans=10;
        while(n-->1 && start)
        {
            current*=(start--);
            ans+=current;
        }
        return ans;
        
    }
};