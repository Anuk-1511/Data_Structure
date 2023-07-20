class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
        int h[26]={0};
    	    
        //using hash table to store count of each character.
        for(int i = 0;i<S.length();i++){
            h[S[i]-'a']++;
        }
        bool flag = false;
        
        //iterating over the string.
        for(int i = 0;i<S.length();i++)
        {
            //if count of current character is 1, we return it. 
            if(h[S[i]-'a'] == 1){
                flag=true;
                return S[i];
            }
        }
        //if there is no non-repeating character then we return '$'.
        if(!flag){
            return '$';
        }
    }
};
