class Solution {
public:
    int hIndex(vector<int>& citations) {
        int hindex=0;
        
        sort(citations.begin(), citations.end(), greater<int>());
       // reverse(citations.begin(),citations.end());
       for(int i=0;i<citations.size();i++){
           if(citations[i]<=i+1){
               hindex=i+1;
           }
       }
       return hindex;


    }
};
