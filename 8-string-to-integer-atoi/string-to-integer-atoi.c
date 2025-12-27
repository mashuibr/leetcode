int myAtoi(char* s) {
    long long result=0;
    int sign=1;
    int p=0;

    while(s[p]==' '||s[p]=='\t')p++;

    if(s[p]=='+'){
        p++;
    } else if(s[p]=='-') {
        sign=-1;
        p++;
    }

    while(s[p]>='0'&&s[p]<='9') {
        int digit=s[p]-'0';

        if(result>(INT_MAX-digit)/10) {
            return sign==1?INT_MAX:INT_MIN;
        }

        result=result*10+digit;
        p++;
    }

    return(int)(sign*result);
}
