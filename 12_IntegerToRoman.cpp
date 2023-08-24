class Solution {
public:
    string intToRoman(int num) {
        vector<int> v1={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> v2={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        string res;

        for(int i=0; i<v1.size() && num>0 ; i++){
            while(v1[i]<=num){
                num-=v1[i];
                res += v2[i];
            }
        }
        return res;
    }
};
