class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        int ans = 0;
        for(int i = 0; i<s.length(); i++ ){
            if(m[s[i]] < m[s[i+1]]){
                ans -= m[s[i]];
            }
            else{
                ans +=m[s[i]];
            }
        }
        return ans;
    }
};

/*
step 1:- Create an unorderd map
step 2:- map every roman letter with integer number
step 3:- create ans variable to store answer
step 4:- if m[s[i]] < m[s[i+1]] then minus it from ans
step 5:- else add it to the ans directly
step 6:- finally return the ans;
*/
