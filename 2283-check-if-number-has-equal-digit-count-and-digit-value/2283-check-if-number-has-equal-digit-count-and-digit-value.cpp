class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int> m;
        for(int i=0;i<num.length();i++)
        {
            m[num[i]-'0']++;
        }
        for(int i=0;i<num.length();i++)
        {
            if(m[i]!=(num[i]-'0'))
                return false;
            
        }
        return true;
        
        
    }
};