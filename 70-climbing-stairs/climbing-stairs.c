int climbStairs(int n) {
    if(n <= 0) return 0;
    if(n == 1) return 1;
    if(n == 2) return 2;
    
    int o = 2;
    int t = 1;
    int result = 0;
    
    for(int i=2; i<n; i++){
    	result = o + t;
    	t = o;
        o = result;
    }
    return result;
}