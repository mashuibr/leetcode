int lengthOfLastWord(char* s) {
    int count=0;
    int len=strlen(s);
    while(s[--len]==' ');
    for(int i=len;i>=0;i--){
        
        if(s[i]==' '){
            break;
        }
        count++;
    }
    return count;
}