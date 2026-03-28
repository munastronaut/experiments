#include "strview.h"

void sv_chop_l(StrView *sv, size_t n) {
    if (n > sv->len)
        n = sv->len;

    sv->len -= n;
    sv->items += n;
}

void sv_trim_l(StrView *sv) {
    while (sv->len > 0 && isspace((unsigned char)sv->items[0])) {
        sv->items += 1;
        sv->len -= 1;
    }
}

void sv_chop_r(StrView *sv, size_t n) {
    if (n > sv->len)
        n = sv->len;

    sv->len -= n;
}

void sv_trim_r(StrView *sv) {
    while (sv->len > 0 && isspace((unsigned char)sv->items[sv->len - 1]))
        sv->len -= 1;
}

void sv_trim(StrView *sv) {
    sv_trim_l(sv);
    sv_trim_r(sv);
}
