class Solution {
public:
    string encode(vector<string>& strs) {
        if(strs.empty()) return "";
        string encoded="";
        for(string str:strs){
            encoded+=to_string(str.size());
            encoded+=".";
        }
        encoded+="#";
        for(string str:strs){
            encoded+=str;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        if(s.empty()) return {};
        vector<string> strs;
        vector<int> len;
        int i=0;
        while(s[i]!='#'){
            string current="";
            while(s[i]!='.'){
                current+=s[i];
                i++;
            }
            len.push_back(stoi(current));
            i++;
        }
        i++;
        for(int sz:len){
            int x=0;
            string current="";
            while(x<sz){
                current+=s[i];
                x++;
                i++;
            }
            strs.push_back(current);
        }
        return strs;
    }
};
