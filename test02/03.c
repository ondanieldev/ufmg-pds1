int numberOfDigitis(int baseNumber, int N) {
    int actualDigit = baseNumber%10;

    if (baseNumber/10 == 0) {
        return(0);
    }

    if (actualDigit == N) {
        return(1 + numberOfDigitis(baseNumber/10, N));
    }

    return(numberOfDigitis(baseNumber/10, N));
}