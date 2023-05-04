class Solution {
public:
    bool isPalindrome(int x) {
        int ans=0;
        int b;
      while(x>0){
           b=x%10;
          ans=b+ans*10;
          b=b/10;
      }
          if(b==ans){
              return true;
          }
         return false;
      
      
}
};
