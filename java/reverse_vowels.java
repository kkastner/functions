public class Solution {
    boolean isNotVowel(char c) {
        char lc = Character.toLowerCase(c);
        if (lc != 'a' && lc != 'e' && lc != 'i' && lc != 'o' && lc != 'u') {
            return true;
        }
        return false;
    }
    public String reverseVowels(String s) {
        char[] chArr = s.toCharArray();
        int start = 0;
        int end = chArr.length-1;
        while (start < end) {
            if (isNotVowel(chArr[start])) {
                start++;
            } else if (isNotVowel(chArr[end])) {
                end--;
            } else {
                char temp = chArr[start];
                chArr[start] = chArr[end];
                chArr[end] = temp;
                start++;
                end--;
            }
        }
        return String.valueOf(chArr);
    }
}