/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        map<int,Employee*>m;
        queue<Employee*>q;
        for(auto i:employees)
            m[i->id]=i;
        q.push(m[id]);
        int totalImportance=0;
        while(!q.empty())
        {
            Employee* temp=q.front();
            q.pop();
            for(auto i:temp->subordinates)
            {
                q.push(m[i]);
            }
            totalImportance+=temp->importance;
        }
        return totalImportance;
    }
};
