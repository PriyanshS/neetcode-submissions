class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> s1;
        for(char a:s){
            s1[a]++;
        }
        unordered_map<char,int>t1;
        for(char b:t){
            t1[b]++;
        }
        for(auto c:s1){
            char c1=c.first;
            int c2=c.second;
            if(c.second!=t1[c1]){
                return false;
            }
        }
        return true;
    }
};
