/*
Given a string s, find the length of the longest substring without repeating characters.
*/

#define NO_OF_CHARS 256 
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        deque<char> q;
        int max_s=0;
        for(int i=0;i<s.size();i++){
            while(find(q.begin(), q.end(), s[i])!=q.end()){
                q.pop_front();
            }
            if(find(q.begin(), q.end(), s[i])==q.end()){
                q.push_back(s[i]);
            }
            if(max_s<q.size()){
                max_s=q.size();
            }
        }
        return max_s;
    }
};