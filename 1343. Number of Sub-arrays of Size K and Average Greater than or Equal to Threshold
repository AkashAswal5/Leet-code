class Solution {
public:
    int numOfSubarrays(vector<int>num, int k, int threshold) {
        int i=0 , j=0 ,c=0,total=k*threshold ,sum=0;
        for(int i=0 ; i<k ; i++) {
            sum=sum+num[i];
        }
        if(sum>=total){
            c++;
        }
        for(int i=k ; i<num.size() ; i++ ){
            sum=sum-num[i-k];
            sum=sum+num[i];

            if(sum>=total){
                c++;
            }
        }return c;
    }
};
