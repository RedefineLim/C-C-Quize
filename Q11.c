#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int minGroupNum(int w, int n) {
    int* dp = (int*)malloc((w + 1) * sizeof(int));
    memset(dp, 0, (w + 1) * sizeof(int));
    dp[0] = 0;
    for (int i = 1; i <= w; i++) {
        for (int j = 0; j <= n; j++) {
            if (i - j >= 0) {
                dp[i] = min(dp[i], dp[i - j] + 1);
            }
        }
    }
    free(dp);
    return dp[w];
}

int main() {
    int w, n;
    scanf("%d %d", &w, &n);
    printf("%d\n", minGroupNum(w, n));
    return 0;
}