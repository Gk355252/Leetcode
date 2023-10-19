class Solution {
public:
    string finalString(string s) {
        string m ="";
        for(int l=0;l<s.size();l++){
            if (s[l] =='i'){
                reverse(m.begin(),m.end());
            }
            else{
                m+=s[l];
            }
        }
        return m;
    }
};