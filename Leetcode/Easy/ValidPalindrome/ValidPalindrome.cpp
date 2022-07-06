class Solution {
  public:
    bool isPalindrome(string s) {
            int beginning = 0;
            int end = s.length() - 1;
            
            while( beginning < end ){
                        for(beginning; beginning < end && !isalnum(s[beginning]); ++beginning);
                        for(end; beginning < end && !isalnum(s[end]); --end);
                        
                        if( tolower(s[beginning]) != tolower(s[end]))
                            return false;
                        ++beginning;
                        --end;
                    }
            return true;
        }
};
