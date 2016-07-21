public class Solution {
    public int strStr(String haystack, String needle) {
        if (needle == null || haystack == null) {
            return -1;
        }
        int needLen = needle.length();
        int hayLen = haystack.length();
        if (needLen==0) {
            return 0;
        }
        for (int i=0; i<=hayLen-needLen;i++) {
            if (haystack.substring(i,i+needLen).equals(needle)) {
                return i;
            }
        }
        return -1;
    }
}