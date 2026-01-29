class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26],arr2[26];
        memset(arr,0,sizeof arr) ;
        memset(arr,0,sizeof arr2) ;

        for(auto it :ransomNote )
            arr[it-'a']+=1;


        for(auto it :magazine )
            arr2[it-'a']+=1;

        for(int i=0;i<26;++i){
            if (arr[i]>arr2[i])
                return false;
        }

        return true;
    }
};
