    bool wordPattern(string pattern, string str) {
        unordered_map<char,string> patMap;
        unordered_map<string,char> strMap;
        
        // Make str a vector of strings
        stringstream ss(str);
        istream_iterator<string> begin(ss);
        istream_iterator<string> end;
        vector<string> strVec(begin, end);
        
        if (strVec.size() != pattern.length()) {
            return false;
        }
        // hashmaps to enforce association of pattern's chars to str's strings
        unordered_map<char,string>::const_iterator patMapIter;
        unordered_map<string,char>::const_iterator strMapIter;
        vector<string>::const_iterator strIter = strVec.begin();
        for (int i=0; i<pattern.length(); i++,strIter++) {
            patMapIter = patMap.find(pattern[i]);
            strMapIter = strMap.find(*strIter);
            if (patMapIter == patMap.end() && strMapIter == strMap.end()) {
                // Neither char nor string has been found before, so set them
                patMap[pattern[i]] = *strIter;
                strMap[*strIter] = pattern[i];
            } else if (patMapIter != patMap.end() && strMapIter != strMap.end()) {
                // Both char and string has been found before, so make sure that
                // they match what was previously set
                if (patMap[pattern[i]] != *strIter || strMap[*strIter] != pattern[i]) {
                    return false;
                }
            } else {
                // One was found before, but the other was not, which means
                // that they do not match correctly
                return false;
            }
        }
        // All cases pass
        return true;
    }