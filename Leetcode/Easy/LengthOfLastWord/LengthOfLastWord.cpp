class Solution {
  public:
    int lengthOfLastWord(string s) {
            int i = s.length() - 1;
            
            for(i; i >= 0 && s[i] == ' '; --i);
                
            const int lastIndex = i;
            
            for(i; i >= 0 && s[i] != ' '; --i);
            
            return lastIndex - i;
        }
  };
