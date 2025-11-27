class Solution {
public:
    int divide(int dividend, int divisor) {
        long ans = 0;
        int mu = 1;
        if(dividend==divisor) return 1;
        if(divisor==1) return dividend;
        // if(divisor>dividend) return 0;
        bool sign = (dividend<0) ^ (divisor<0);
        long tdividend = abs((long)dividend);
        long tdivisor = abs((long)divisor);
        int td = tdivisor;

        while(tdivisor<=tdividend){
            if(ans==INT_MAX or ans==INT_MIN) return ans;
            if(td<=tdividend){
                cout<<tdividend<<" "<<td<<endl;

                tdividend -= td;
                td+=tdivisor;
                ans += mu;
                mu++;
            }
            else{
                // cout<<tdividend<<endl;
                td = tdivisor;
                mu = 1;
                
                tdividend -= td;
                td+=tdivisor;
                ans += mu;
                mu++;
            }
        }
        int tans;
        if(ans>INT_MAX) tans = INT_MAX;
        else if(ans<INT_MIN) tans = INT_MIN;
        else tans = ans;
        return sign==false?tans:(-1)*tans;
    }
};
