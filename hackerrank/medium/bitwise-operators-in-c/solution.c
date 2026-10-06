#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k) {
  int maxA = 0, maxB = 0, maxC = 0;
    
    for (int a = 1; a <=n; a++) {
       for (int b = a + 1; b <= n; b++){
            int x = a & b;
            int y = a | b;
            int z = a ^ b;
            
                if (x < k && x > maxA) maxA = x;
                if (y < k && y > maxB) maxB = y;
                if (z < k && z > maxC) maxC = z;
       }
    }
    printf("%d\n%d\n%d\n", maxA, maxB, maxC);
}


int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
