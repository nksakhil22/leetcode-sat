vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> answer(n);

    for (int i = 0; i < n; i++) {
        int currentProduct = 1;

        for (int j = 0; j < n; j++) {
            if (i != j) {
                currentProduct *= nums[j];
            }
        }
        
        answer[i] = currentProduct;
    }

    return answer;
}
