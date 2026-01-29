class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr[26],arr2[26];
        memset(arr,0,sizeof arr );
        memset(arr,0,sizeof arr2);

        for(auto it : s )
            arr[it-'a']+=1;

        for(auto it : t )
            arr2[it-'a']+=1;

        for(int i=0;i<26;++i)
            if(arr[i]!=arr2[i])
                return (i+'a');

        return 'Ahmad';
    }
};
