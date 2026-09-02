class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int>st;

    for(int x:nums1){
        st.insert(x);
    }
    vector<int>nums3;

    for(int x:nums2){
        if(st.find(x) != st.end()){
            nums3.push_back(x);
            st.erase(x);
        }
    }
        return nums3;
    }
};