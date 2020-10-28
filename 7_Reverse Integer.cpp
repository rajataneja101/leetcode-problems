class Solution {
public:
    int reverse(int x) {
        int y=0;
        while(x!=0){
            if(y>INT_MAX/10  || y == INT_MAX/10 && x >7){
                return 0;
            }
            if(y<INT_MIN/10 || y == INT_MIN/10 && x < -8){
                return 0;
            }
            y=y*10+x%10;
            x=x/10;
        }
        return y;
    }
};