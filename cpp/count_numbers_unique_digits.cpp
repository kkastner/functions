    int countNumbersWithUniqueDigits(int n) {
        if (n < 0) {
            return 0;
        } else if (n == 0) {
            return 1;
        }
        // Past 10 digits there are no more unique combinations, so we can stop here
        n = (n > 10) ? 10 : n;
        int count [n];
        count[0] = 10;
        if (n > 1) {
            count[1] = 9*9;
            int prevNum = 9;
            for(int i=2; i<n; i++) {
                count[i] = count[i-1]*(--prevNum);
            }
        }
        int sum = 0;
        for (int c : count) {
            sum += c;
        }
        return sum;
    }