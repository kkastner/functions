    string convertToTitle(int n) {
        string title = "";
        for (;n > 0; n /= 26) {
            char ch = char((--n % 26) + 65);
            title = ch + title;
        }
        return title;
    }