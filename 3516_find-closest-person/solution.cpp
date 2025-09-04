class Solution {
public:

    int calculateAbsoluteValue(int x){
        if (x<0)
            x*=-1;
        return x;
    }
    int findClosest(int x, int y, int z) {
        if (calculateAbsoluteValue(z-y) > calculateAbsoluteValue(z-x))
            return 1;
        else if (calculateAbsoluteValue(z-x) > calculateAbsoluteValue(z-y))
            return 2;
        else 
            return 0;
    }
};