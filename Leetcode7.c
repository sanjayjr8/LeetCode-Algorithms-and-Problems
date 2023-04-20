bool isPalindrome(int x){
    if (x < 0) {
        return false; // Negative numbers are not palindromes
    }
    long int reversed = 0;
    int original = x;
    while (original != 0) {
        reversed = reversed * 10 + original % 10;
        original /= 10;
    }
    return x == reversed;
}
