#include <stdio.h>
#include <string.h>

#define NO_OF_CHARS 256

int getNextState(char *pat, int M, int state, int x) {
    if (state < M && x == (unsigned char)pat[state])
        return state + 1;

    for (int ns = state; ns > 0; ns--) {
        if ((unsigned char)pat[ns - 1] == x) {
            int i;
            for (i = 0; i < ns - 1; i++) {
                if (pat[i] != pat[state - ns + 1 + i])
                    break;
            }
            if (i == ns - 1)
                return ns;
        }
    }

    return 0;
}

void computeTF(char *pat, int M, int TF[][NO_OF_CHARS]) {
    for (int state = 0; state <= M; ++state) {
        for (int x = 0; x < NO_OF_CHARS; ++x) {
            TF[state][x] = getNextState(pat, M, state, x);
        }
    }
}

void search(char *pat, char *txt) {
    int M = strlen(pat);
    int N = strlen(txt);

    int TF[M + 1][NO_OF_CHARS];

    computeTF(pat, M, TF);

    int state = 0;
    int found_count = 0;

    printf("Searching for pattern '%s' in text...\n", pat);
    for (int i = 0; i < N; i++) {
        state = TF[state][(unsigned char)txt[i]];
        if (state == M) {
            printf("Pattern found at index %d\n", i - M + 1);
            found_count++;
        }
    }

    if (found_count == 0) {
        printf("Pattern not found in text.\n");
    }
}

int main() {
    printf("===========================================\n");
    printf("  EXP 39: Pattern Searching using FA\n");
    printf("===========================================\n");

    char txt[] = "AABAACAADAABAAABAA";
    char pat[] = "AABA";

    printf("Text   : %s\n", txt);
    printf("Pattern: %s\n\n", pat);

    search(pat, txt);

    return 0;
}
