bool isMatch(char* s, char* p){
    int i=0,j=0,starIdx=-1,match=0,m=strlen(s),n=strlen(p);
    while(i<m){
        if(j<n&&(p[j]=='?'||p[j]==s[i])){
            i++;
            j++;
        }else if(j<n&&p[j]=='*'){
            starIdx=j;
            match=i;
            j++;
        }else if(starIdx!=-1){
            j=starIdx+1;
            match++;
            i=match;
        }else{
            return false;
        }
    }
    while(j<n&&p[j]=='*'){
        j++;
    }
    return j==n;

}