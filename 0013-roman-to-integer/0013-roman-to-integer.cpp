class Solution {
public:
    int romanToInt(string s) {

       unordered_map<char, int> mp = {{'I', 1},
                                        {'V' , 5}, 
                                        {'X' , 10}, 
                                        {'L' , 50}, 
                                        {'C' , 100},
                                        {'D' , 500}, 
                                        {'M' , 1000}};

       /* int sum = 0;
        int n = s.size() - 1;
        for(int i = 0; i < n; i++){
            if(mp[s[i]] >= mp[s[i + 1]]){
                sum += mp[s[i]];
            }
            else{
                sum -= mp[s[i]];
            }
        }
        return sum;*/

        int sum = 0, n = s.size(), i = 0;
        while(i < n){
            if( mp[s[i]] >= mp[s[i + 1]]){
                sum += mp[s[i]];         
            }
            else{
                sum -= mp[s[i]];     
            }
            i++;
        }
        return sum;
    }
};