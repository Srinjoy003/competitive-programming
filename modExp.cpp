llt mod_exp(llt base, llt exp, llt mod) {
    llt result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {  // If exp is odd, multiply base with result
            result = (result * base) % mod;
        }
        base = (base * base) % mod;  // Square the base
        exp = exp / 2;  // Reduce exp by half
    }
    return result;
}
