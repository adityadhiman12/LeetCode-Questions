class Solution {
public:
    
    unordered_map<string, int> countOfAtoms(string& formula, int& i) 
    {
        unordered_map<string, int> table;
        unordered_map<string, int> nestedTable;
        string name;
        int N = formula.length();
        int count = 0;    
        while (i <= N) 
        {
            if (i == N || !(isdigit(formula[i]) || islower(formula[i]))) 
            {
                if (count == 0) 
                    count=1;
                if (!nestedTable.empty()) 
                {
                    for (auto& p: nestedTable) 
                        table[p.first] += p.second * count;
                    nestedTable.clear();
                } 
                else if (!name.empty()) 
                {
                    table[name] += count;
                    name = "";
                }
                count = 0;
            }         
            if (i == N) 
                break;
            if (isdigit(formula[i])) 
                count = count * 10 + formula[i] - '0'; 
            else if (islower(formula[i])) 
                name += formula[i];
            else if (isupper(formula[i])) 
                name += formula[i];
            else if (formula[i] == '(') 
            {
                ++i;
                nestedTable = countOfAtoms(formula, i);
            } 
            else if (formula[i] == ')') 
                return table; 
            else 
                assert(0);
            ++i;
        }
        
        return table;
    }
    
    string countOfAtoms(string formula) {
        int i = 0;
        unordered_map<string, int> table = countOfAtoms(formula, i);  
        map<string, int> sortedTable(table.begin(), table.end());
        string result;
        for (auto& p: sortedTable) {
            result += p.first + (p.second > 1 ? to_string(p.second) : "");
        }
        
        return result;
    }
};
