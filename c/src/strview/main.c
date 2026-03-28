#include "strview.h"

int main(void) {
    StrView str = sv("    Hello, World            ");
    printf("|" SV_Fmt "|\n", SV_Arg(str));
    sv_trim_l(&str);
    printf("|" SV_Fmt "|\n", SV_Arg(str));

    StrView str2 = sv("      Lorem ipsum dolor sit amet consecteteur                      ");
    printf("|" SV_Fmt "|\n", SV_Arg(str2));
    sv_trim(&str2);
    printf("|" SV_Fmt "|\n", SV_Arg(str2));
    return 0;
}
