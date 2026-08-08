#include <string>
class Solution {
public:
    bool isPalindrome(string s) {
        string b;
        for(char x :s){
            if(x>='A'&&x<='Z'){
                b.push_back(x+32);
                
            }
            else if((x>='a'&&x<='z')||(x>='0'&&x<='9'))
                b.push_back(x);
        }
        if(b=="") return true;
        int i =0;
        int j = b.size()-1;
        while(true){
            if(i==j||i>j){
                return true;
            }

            else if(b[i]==b[j]){
                i++;
                j--;
            }
            else if(b[i]!=b[j]){
                break;
            }
        }

        return false;
    }
};