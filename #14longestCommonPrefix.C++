class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int a = strs.size();
        string n = strs[0], m = strs[a-1];
        string ans = "";
        for(int i = 0; i<n.size(); i++){
            if(n[i]==m[i]){
                ans+=n[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};
/* 
vectror strs = {flower, flow, flight}
step 1:- sort given vector;
step 2:- vector wiil be like this {flight, flow, flower}
step 3:- compare 1st string and last string only
step 4:- for comparing store thin in string variable n = strs[0] & m = strs[size-1];
step 5:- if string match then add string into ans
step 6:- else break the flow
*/
