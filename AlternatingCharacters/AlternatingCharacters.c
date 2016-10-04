#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    char buffer[100001];

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        //  Reset pointers
        char *follower = &buffer[0];
        char *leader   = &buffer[1];
        //  Reset # deletions
        int deletions = 0;

        scanf("%s", buffer);
        //  Advance to null byte
        while (*leader != 0) {
            if (*leader++ == *follower++) {
                deletions++;
            }
        }
        printf("%d\n", deletions);
    }
    return 0;
}