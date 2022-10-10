class Solution {
public:
    string breakPalindrome(string palindrome) {
        int len=palindrome.length();
        if(len==1) return "";
        if(len%2==0){
            int i;
            for(i=0;i<len;i++){
             if(palindrome[i]!='a'){
                 palindrome[i]='a';
                 break;
            }
            }
            if(i==len){
                palindrome[i-1]='b';
            }
        }
        else if(len%2!=0){
         int mid=len/2;
            int i;
            for(i=0;i<len;i++){
                if(palindrome[i]!='a' && i!=mid){
                    palindrome[i]='a';
                    break;
                }
            }
            if(i==len){
                palindrome[i-1]='b';
            }
        }
        return palindrome;
    }
};