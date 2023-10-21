class Solution {
public:
    string freqAlphabets(string s) {
        int i=s.size()-1;string res;
        while(i>=0){
            int n=0;
            if(s[i]=='#'){
                i--;
                n=s[i]-'1'+1;
                i--;
                n += (s[i]-'1'+1)*10;
                i--;

            }
            else{
                n=s[i]-'1'+1;
                i--;
            }
            res+=n+'a'-1;
           
        }
         reverse(res.begin(),res.end());
            return res;
    }
};