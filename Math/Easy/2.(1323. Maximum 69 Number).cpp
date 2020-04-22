class Solution {
public:
    int maximum69Number (int num) {
        string newNum=to_string(num);
        for(auto &c:newNum)
        {
            if(c=='6')
            {
                c='9';
                break;
            }                
        }
        return stoi(newNum);
    }
};
