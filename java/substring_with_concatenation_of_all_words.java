public class Solution {
    public List<Integer> findSubstring(String s, String[] words) {
        List<Integer> idxList = new ArrayList<Integer>();
        if (s != null && words != null && words.length > 0) {
            int sLen = s.length();
            int numWords = words.length;
            int wordLen = words[0].length();
            HashMap<String,Integer> origWordMap = new HashMap<String,Integer>();
            for (int i=0; i<numWords; i++) {
                int value = 0;
                if (origWordMap.containsKey(words[i])) {
                    value = origWordMap.get(words[i]);
                }
                value++;
                origWordMap.put(words[i],new Integer(value));
            }
            HashMap<String,Integer> wordMap = (HashMap)origWordMap.clone();
            //List<String> wordList = new ArrayList<String>(Arrays.asList(words));
            for (int i=0; i<=sLen-numWords*wordLen; i++) {
                String substr;
                if (wordMap.containsKey(substr = s.substring(i,i+wordLen))) {
                    //String substr = s.substring(i,i+wordLen);
                    int value = wordMap.get(substr)-1;
                    if (value == 0) {
                        wordMap.remove(substr);
                    } else {
                        wordMap.put(substr,new Integer(value));
                    }
                    int j = i+wordLen;
                    while (j<=sLen-wordLen && wordMap.containsKey(substr = s.substring(j,j+wordLen))) {
                        //substr = s.substring(j,j+wordLen);
                        value = wordMap.get(substr)-1;
                        if (value == 0) {
                            wordMap.remove(substr);
                        } else {
                            wordMap.put(substr,new Integer(value));
                        }
                        j+=wordLen;
                    }
                    if (wordMap.isEmpty()) {
                        idxList.add(new Integer(i));
                    }
                    //wordList = new ArrayList<String>(Arrays.asList(words));
                    wordMap = (HashMap)origWordMap.clone();
                }
            }
        }
        return idxList;
    }
}