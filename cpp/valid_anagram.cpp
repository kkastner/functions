    bool isAnagram(string s, string t) {
        unordered_map<char,int> charMap;
        unordered_map<char,int>::const_iterator it;
        for (int i=0; i<s.length(); ++i)
        {
            char ch = s[i];
            
            if (!isalpha(ch)) {
                continue;
            }
            ch = tolower(ch);
            
            it = charMap.find(ch);
            if (it == charMap.end()) {
                charMap[ch] = 1;
            } else {
                charMap[ch]++;
            }
        }
        for (int i=0; i<t.length(); ++i)
        {
            char ch = t[i];
            
            if (!isalpha(ch)) {
                continue;
            }
            ch = tolower(ch);
            
            it = charMap.find(ch);
            if (it == charMap.end()) {
                return false;
            } else {
                charMap[ch]--;
                if (charMap[ch] == 0) {
                    charMap.erase(ch);
                }
            }
        }
        if (charMap.empty()) {
            return true;
        } else {
            return false;
        }
    }