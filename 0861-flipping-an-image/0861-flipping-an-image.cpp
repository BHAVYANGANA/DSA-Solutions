class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        int n = image.size();
        int m = image[0].size();

        for(int i = 0; i < n; i++){
            for(int l = 0, r = m - 1; l < r; l++, r--){
                swap(image[i][l], image[i][r]);
            }
            for(int k = 0; k < m; k++){
                if(image[i][k] == 0){
                    image[i][k] = 1;
                }
                else{
                    image[i][k] = 0;
                }
            }
        }

        return image;
        
    }
};