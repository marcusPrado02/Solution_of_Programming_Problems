#include <cmath> 

class Solution {
  public:
    
    
    int reverse(int x) {
             string number = to_string(x);
             long n = number.length();
             int m = n;
            
             for(int i = n-1; i >= 0 ; j++,i--){
                          if( number[0] == '-'){
                                          n += ( number[i] - 48 )* pow(10,i) *(-1);
                                       }else{
                                                       n += ( number[i] - 48 )* pow(10,i);
                                                    }
                       }
            
              if(n < 0)
              {   
                            n = (n / 10)-1 + (m >= 10?-1:0);
                        }else{
                                      n-=m;
                                  }
              
              if(n >= 2147483647 || n <= -2147483647){
                            return 0;
                        }
            
            
              return n; 
        }
};
