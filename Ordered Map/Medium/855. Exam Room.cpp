class ExamRoom {
public:
    int n;
    map<int,int>m;
    ExamRoom(int N) {
        n=N;
    }
    
    int seat() {
        int index=-1;
        if(m.size()==0)
        {
            m[0]=1;
            return 0;
        }
        else
        {
            int last=-1;
            int temp=0;
            for(auto i=m.begin();i!=m.end();i++)
            {
                if(last==-1)
                {
                    temp=i->first;
                    index=0;
                }
                else
                {
                    if((i->first-last)/2>temp)
                    {
                        temp=(i->first-last)/2;
                        index=(last+i->first)/2;
                    }
                }
                last=i->first;
            }
            if(n-1-last>temp)
            {
                m[n-1]=1;
                index=n-1;
            }
            else
            {
                m[index]=1;
            }
            return index;
        }
    }
    
    void leave(int p) {
        m.erase(p);
    }
};

/**
 * Your ExamRoom object will be instantiated and called as such:
 * ExamRoom* obj = new ExamRoom(N);
 * int param_1 = obj->seat();
 * obj->leave(p);
 */
