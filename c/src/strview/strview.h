#ifndef STRVIEW_H_
#define STRVIEW_H_

#define SV_Fmt "%.*s"
#define SV_Arg(s) (int)(s).len, (s).items

#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char const *items;
    size_t len;
} StrView;

#define sv(s) ((StrView){.items = (s), .len = strlen(s)})
#define sv_sub(ptr, len) ((StrView){.items = (ptr), .len = (len)})

void sv_chop_l(StrView *sv, size_t n);

void sv_trim_l(StrView *sv);

void sv_chop_r(StrView *sv, size_t n);

void sv_trim_r(StrView *sv);

void sv_trim(StrView *sv);

#endif
