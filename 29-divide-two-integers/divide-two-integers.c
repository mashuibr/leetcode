int divide(int dividend,int divisor){
    if(dividend==INT_MIN&&divisor==-1)return INT_MAX;
    if(dividend==INT_MIN)return INT_MIN/divisor;
    int sign=((dividend<0)^(divisor<0))?-1:1;
    unsigned int abs_dividend=(dividend<0)?0U-(unsigned int)dividend:(unsigned int)dividend;
    unsigned int abs_divisor=(divisor<0)?0U-(unsigned int)divisor:(unsigned int)divisor;
    unsigned int quotient=0;
    unsigned int temp=abs_divisor;
    unsigned int multiple=1;
    
    while(abs_dividend>=abs_divisor){
        temp=abs_divisor;
        multiple=1;
        while(abs_dividend>=(temp<<1)){
            temp<<=1;
            multiple<<=1;
        }
        abs_dividend-=temp;
        quotient+=multiple;
    }
    
    long long result=(long long)quotient*sign;
    return(result>INT_MAX)?INT_MAX:(result<INT_MIN?INT_MIN:(int)result);
}
