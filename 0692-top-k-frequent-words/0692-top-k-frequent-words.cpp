class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> m;
        for(auto i:words){
            m[i]++;
        }
        vector<string> ans;
        while(k--){
            string max1="";
            int max2=INT_MIN;
            for(auto i:m){
                if(i.second>max2){
                    max1=i.first;
                    max2=i.second;
                }
                else if(i.second==max2){
                    if(i.first<max1){
                        max1=i.first;
                    }
                }
            }
            ans.push_back(max1);
            m.erase(max1);
        }
        // sort(ans.begin(),ans.end());
        return ans;
    }
};