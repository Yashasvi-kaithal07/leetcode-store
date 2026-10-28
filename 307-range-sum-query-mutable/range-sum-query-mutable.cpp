class NumArray {
public:

    vector<int> prefix;
    vector<int> a;
    
    

    NumArray(vector<int>& nums) {
    prefix = nums;
    a = nums;
    

        for(int i=1; i < prefix.size(); i++){
            prefix[i] = prefix[i-1] + prefix[i];
        }
    }
    
    void update(int index, int val) {
       int diff = val - a[index];
        a[index] = val;

    for(int i = index; i < prefix.size(); i++){
        prefix[i] += diff;
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0){
            return prefix[right];
        }

        return prefix[right] - prefix[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */