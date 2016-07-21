    int bulbSwitch(int n) {
        if (n <= 0) {
            return 0;
        }
        // Only perfect squares will be left on after this series of actions.
        // You can get the number of perfect squares by taking the square root of n
        return int(sqrt(n));
    }