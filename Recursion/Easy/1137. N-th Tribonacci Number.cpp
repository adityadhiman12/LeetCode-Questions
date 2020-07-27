class Solution {
public:
    int tribonacci(int n) {
        int f[]={0,1,1,2};
        if(n==0)
            return 0;
        if(n==1 || n==2)
            return 1;
        for(int i=4;i<=n;i++)
            f[i%4]=f[(i-1)%4]+f[(i-2)%4]+f[(i-3)%4];
        return f[n%4];
    }
};
