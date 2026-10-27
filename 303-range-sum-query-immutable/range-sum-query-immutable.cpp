class NumArray {
public:
    vector<int>prefixS;
    NumArray(vector<int>& nums) {
        prefixS = nums;

        //calculating Prefix Sum
        for(int i=1; i < prefixS.size(); i++){
            prefixS[i] = prefixS[i-1] + prefixS[i];
        }
    }
    
    int sumRange(int left, int right) {
        if( left == 0){
            return prefixS[right];
        } //edge case 

        return prefixS[right] - prefixS[left -1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */