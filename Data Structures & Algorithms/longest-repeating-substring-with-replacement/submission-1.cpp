class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int maxi=0;
        int longest=0;
                int maxFreq = 0;

                int freq[26] = {0};
        for(int right=0;right<s.size();right++)
        { freq[s[right] - 'A']++;
        maxi=max(maxi,freq[s[right] - 'A']);


            while((right - left + 1) - maxi> k){
            freq[s[left] - 'A']--;
                           left++;
            }
                        longest = max(longest, right - left + 1);

        }
        return longest;
    }
};
