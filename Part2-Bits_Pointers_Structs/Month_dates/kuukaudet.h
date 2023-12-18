#ifndef OHJELMOINNIN_TEKNIIKKA_C_KUUKAUDET_H
#define OHJELMOINNIN_TEKNIIKKA_C_KUUKAUDET_H
/**
 * Library for handling the amount of days in months
 */


enum Kuukaudet {
    TAMMIKUU,
    HELMIKUU,
    MAALISKUU,
    HUHTIKUU,
    TOUKOKUU,
    KESAKUU,
    HEINAKUU,
    ELOKUU,
    SYYSKUU,
    LOKAKUU,
    MARRASKUU,
    JOULUKUU,

    KK_LKM
};
typedef enum Kuukaudet Kuukaudet;

extern const char* KK_NIMET[KK_LKM];
extern const char KK_PAIVAT[2][KK_LKM];

int karkausvuosi(int year);

char kkPituus(const char* month_name, int year);

#endif /* OHJELMOINNIN_TEKNIIKKA_C_KUUKAUDET_H */
