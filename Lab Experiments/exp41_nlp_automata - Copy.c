#include <stdio.h>
#include <string.h>
#include <ctype.h>

int recognize_date(const char *date) {
    int i = 0;
    int day_digits = 0;
    int month_digits = 0;

    while (isdigit((unsigned char)date[i])) {
        day_digits++;
        i++;
    }

    if (day_digits < 1 || day_digits > 2 || date[i] != '/') {
        return 0;
    }

    i++;

    while (isdigit((unsigned char)date[i])) {
        month_digits++;
        i++;
    }

    if (month_digits < 1 || month_digits > 2 || date[i] != '\0') {
        return 0;
    }

    return 1;
}

int check_lexicon(const char *word) {
    const char *lexicon[] = {
        "do", "did", "does", "done",
        "they", "fish", "can", "rivers", "pools", "in", "december", "scotland"
    };
    int num_words = sizeof(lexicon) / sizeof(lexicon[0]);

    for (int i = 0; i < num_words; i++) {
        if (strcasecmp(word, lexicon[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    printf("===========================================\n");
    printf("  EXP 41: NLP Automata (Dates & Lexicon)\n");
    printf("===========================================\n");

    const char *dates_to_test[] = {"11/2", "1/12", "31/12", "123/4", "12/abcd"};
    int num_dates = sizeof(dates_to_test) / sizeof(dates_to_test[0]);

    printf("--- Date Recognizer Automata ---\n");
    for (int i = 0; i < num_dates; i++) {
        if (recognize_date(dates_to_test[i])) {
            printf("Date '%s': Accepted (Valid DD/MM format)\n", dates_to_test[i]);
        } else {
            printf("Date '%s': Rejected (Invalid format)\n", dates_to_test[i]);
        }
    }

    const char *words_to_test[] = {"do", "did", "running", "fish", "december", "xyz"};
    int num_words = sizeof(words_to_test) / sizeof(words_to_test[0]);

    printf("\n--- Lexicon Word Lookup ---\n");
    for (int i = 0; i < num_words; i++) {
        if (check_lexicon(words_to_test[i])) {
            printf("Word '%s': Found in Lexicon\n", words_to_test[i]);
        } else {
            printf("Word '%s': Not found in Lexicon\n", words_to_test[i]);
        }
    }

    return 0;
}
