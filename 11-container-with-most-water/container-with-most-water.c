int min(int a, int b) {
    return (a < b) ? a : b;
}
int max(int a, int b) {
    return (a > b) ? a : b;
}
int maxArea(int* height, int heightSize) {
    int maxVolume=0;
    int start=0;
    int end=heightSize-1;
    int b,h;
    while(start!=end){
        b=end-start;
        int volume=b*(min(height[start],height[end]));
        if(volume>=maxVolume)maxVolume=volume;
        (height[start]>=height[end]) ? end-- : start++;
    }

    return maxVolume;
}