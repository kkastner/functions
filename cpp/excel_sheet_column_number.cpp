    int titleToNumber(string s) {
        int sLen = s.length();
        int colNum = 0;
        for (int i=0; i<sLen; i++) {
            int num = int(toupper(s[i]))-64; // get ascii value and convert to 1-26 range
            colNum += int(pow(26,sLen-i-1)) * num;
        }
        return colNum;
    }