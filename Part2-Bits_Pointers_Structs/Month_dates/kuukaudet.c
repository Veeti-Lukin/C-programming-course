
#include "kuukaudet.h"

#include <ctype.h>

const char* KK_NIMET[KK_LKM] = {"tammikuu", "helmikuu", "maaliskuu", "huhtikuu",
                                "toukokuu", "kesäkuu", "heinäkuu", "elokuu", "syyskuu",
                                "lokakuu", "marraskuu", "joulukuu"};
const char KK_PAIVAT[2][KK_LKM] = {{31, 28, 31, 30, 31,
                                           30, 31, 31, 30, 31,
                                           30, 31},

                                   {31, 29, 31, 30, 31,
                                           30, 31, 31, 30, 31,
                                           30, 31}};


int karkausvuosi(int year) {
    if (year % 4 != 0) return 0;
    if (year % 100 == 0 && year % 400 != 0) return 0;

    return 1;
}

char kkPituus(const char* month_name, int year) {
    int i = 0;

    for (i = 0; i < KK_LKM; i++) {
        int found = 1;

        int j = 0;
        while (month_name[j] != '\0' || KK_NIMET[i][j] != '\0') {
            if (tolower(month_name[j]) != tolower(KK_NIMET[i][j])) {
                found = 0;
            }
            j++;
        }

        if (found) {
            return KK_PAIVAT[karkausvuosi(year)][i];
        }
    }

    return -1; /* bad month name */
}
