class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> candy(ratings.size(), 0);
        vector<int> candy1(ratings.size(), 0);
        candy[0]=0;
        
        for (int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1]) candy[i]=candy[i-1]+1;
            else candy[i]=0;
        }
        for (int i=ratings.size()-2;i>-1;i--){
            if(ratings[i]>ratings[i+1]) candy1[i]=candy1[i+1]+1;
            else candy1[i]=0;
        }
        int total_candy=0;
        for(auto i=0;i<candy.size();i++) {
            total_candy+=(max(candy[i],candy1[i])+1);
        }
        return total_candy;
    }
};