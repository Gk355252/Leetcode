class Solution {
public:
    string reversePrefix(string word, char ch) {
        int count =-1;
        for(int i=0;i<word.size();i++){
            if (word[i] == ch){
                count=i;
                break;
            }
        }
        if (count!=-1){
        reverse(word.begin(),word.begin()+count+1);
        }
        return word;
    }
};