int mult(int n1, int n2) {
    if (n2 == 0) return(0);
    return(n1 + mult(n1, n2-1));
}