int strStr(char* haystack, char* needle) {
    int p=0;
    int size=strlen(needle);
    int n=strlen(haystack);
    for(int i=0;i<=n-size;i++){
        p=0;
        while(p<size && haystack[i+p]==needle[p]) p++;
        if(p==size) return i;
    }
    return -1;

}