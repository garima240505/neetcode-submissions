class Solution {
public:
int longest=0;
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp;
        for(int x:nums){
           mp.insert(x); 
        }
        for(int x:mp){
    if(mp.find(x-1)==mp.end()){
        int current=x;
        int length=1;
        while(mp.find(current+1)!=mp.end()){
            current++;
       length++;
       
        }
        longest=max(length,longest);
    }
        }   
    return longest;
    }
};
