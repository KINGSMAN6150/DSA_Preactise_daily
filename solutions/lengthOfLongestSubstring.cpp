class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left = 0;
        int maxLen = 0;

        for(int right = 0; right < s.length(); right++){
            while(st.find(s[right]) != st.end()){
                st.erase(s[left]);
                left ++;
            }

            st.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};

//could have been better if you dont use while llop and use more pointers to keep track of lastt seen index of character