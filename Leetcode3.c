(17 sloc)  531 Bytes
int maxDivScore(int* nums, int numsSize, int* divisors, int divisorsSize){
    int maxDivisor = divisors[0];
    int maxScore = 0;
    for (int i = 0; i < divisorsSize; i++) {
        int score = 0;
        for (int j = 0; j < numsSize; j++) {
            if (nums[j] % divisors[i] == 0) {
                score++;
            }
        }
        if (score > maxScore || (score == maxScore && divisors[i] < maxDivisor)) {
            maxScore = score;
            maxDivisor = divisors[i];
        }
    }
    return maxDivisor;
}
