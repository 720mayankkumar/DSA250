class Solution {
private:
    bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z') | (ch >= '0' && ch <= '9'))
            return 1;
        else
            return 0;
    }
    char tolowercase(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
            return ch;
        else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
    bool checkpalindrome(string a){
        int s=0;
        int e= a.size()-1;
        while(s<e){
            if((a[s])!=(a[e])){
                return 0;

            }
            else{s++;
            e--;}
        }
        return -1;
    }

public:
    bool isPalindrome(string s) {
        // faltu charchter hatado
        int i = 0;
        string temp = "";
        for (int j = 0; j < s.size(); j++) {
            if (valid(s[j])) {
                temp.push_back(s[j]);
            }
        }

        // ab lower case me convert karte hai
        for(int j=0;j<temp.size();j++){
            temp[j]=tolowercase(temp[j]);

        }
        return checkpalindrome(temp);
    }
};