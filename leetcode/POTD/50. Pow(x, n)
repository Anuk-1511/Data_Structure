class Solution {
public:
    double myPow(double x, int n) {  
        if (x == 1.0) return x;
        uint32_t m = (n < 0 ? -static_cast<int64_t>(n) : n);
        double z = 1.0,  w = (n < 0 ? 1.0 / x : x);
        while (m != 0) {  
            if (m & 0x1UL) z *= w;
            w *= w;   
            m >>= 1;
        }
        return z;     
    }
};
