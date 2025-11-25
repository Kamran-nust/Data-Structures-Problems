// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

class Solution {
public:
    double myPow(double x, int n) {

        if (n==1) return x;
        if (x==1) return 1.0;
        if (n==0) return 1.0;
        if (x==-1 && n%2==0) return 1.0;
        if(x==-1 && n%2!=0) return -1.0;
        double power=1;
        int remainder;
        long binary=n;
        if (n<0)
        {
            binary=-binary;
            x=1/x;

        }
        
        while (binary>0)
        {
            if(binary%2==1)
             {
             power=power*x;
             }
            binary=binary/2;
             x*=x;
        }

        return power;
    }
};
