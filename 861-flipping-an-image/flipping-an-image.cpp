
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();

        // Step 1: Reverse every row
        for(int i = 0; i < n; i++) {
            reverse(image[i].begin(), image[i].end());
        }

        // Step 2: Invert every element
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < image[i].size(); j++) {
                if(image[i][j] == 0) {
                    image[i][j] = 1;
                }
                else {
                    image[i][j] = 0;
                }
            }
        }

        return image;
    }
};
