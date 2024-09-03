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



llt modInverse(llt a, llt mod) {
    return mod_exp(a, mod - 2, mod);
}



llt modMultiply(llt a, llt b) {
    return ((a % MOD) * (b % MOD)) % MOD;
}



llt binomialCoeff(llt n, llt k) {
    if (k > n - k) 
        k = n - k;
 
    llt res = 1;

    for (llt i = 0; i < k; ++i) {
        res = modMultiply(res, n - i);
        res = modMultiply(res, modInverse(i + 1, MOD));
    }
 
    return res;
}

llt modSum(llt a, llt b) {
    return (a % MOD + b % MOD) % MOD;
}
