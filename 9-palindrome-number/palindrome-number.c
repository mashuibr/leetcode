bool isPalindrome(int x) {
    char str[11];
    snprintf(str, sizeof(str), "%d", x);
    if(str[0]==NULL)exit(0);
    int end=0;
    while (str[end+1]!=NULL){
        end++;
    }
    for(int i=0,j=end ; i<end/2,j>end/2; i++,j--){
        if(str[i]!=str[j])return false;
    }
    return true;
}