#include "lookup.h"
#include <string.h>

typedef struct {
    const char *name;
    const char *value;
} LookupName;

static const LookupName lookup_table[] = {
        {"720",     "720 Degrees (rev 4)"},
        {"720g",    "720 Degrees (German, rev 2)"},
        {"720gr1",  "720 Degrees (German, rev 1)"},
        {"720r1",   "720 Degrees (rev 1)"},
        {"720r2",   "720 Degrees (rev 2)"},
        {"720r3",   "720 Degrees (rev 3)"},
        {"7jigen",  "7jigen no Youseitachi - Mahjong 7 Dimensions (Japan)"},
        {"7mezzo",  "7 e Mezzo"},
        {"7toitsu", "Chi-Toitsu"},
};

const char *lookup_7(const char *name) {
    for (size_t i = 0; i < sizeof(lookup_table) / sizeof(lookup_table[0]); i++) {
        if (strcmp(lookup_table[i].name, name) == 0) {
            return lookup_table[i].value;
        }
    }
    return NULL;
}

const char *r_lookup_7(const char *value) {
    for (size_t i = 0; i < sizeof(lookup_table) / sizeof(lookup_table[0]); i++) {
        if (strcmp(lookup_table[i].value, value) == 0) {
            return lookup_table[i].name;
        }
    }
    return NULL;
}