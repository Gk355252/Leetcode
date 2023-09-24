class Solution {
public:
    int minFlips(string target) {
        char temp = '0';
        int count = 0;
        for(int i=0;i<target.size();i++){
            if(target[i]!=temp){
                temp = target[i];
                count++;
            }
        }
        return count;
    }
};