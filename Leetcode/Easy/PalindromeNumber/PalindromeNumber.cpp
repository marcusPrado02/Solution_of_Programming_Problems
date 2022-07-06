class Solution {
  public:
    bool isPalindrome(int x) {
            
            string str = to_string(x);
            int n = str.length();
            
            for(int i = 0;i < n; i++){
                        if(str[i] != str[--n]){
                                        return false;
                                    }
                    }
            return true;
        }
};
