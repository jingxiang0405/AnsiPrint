#include "AnsiPrint.h"
#include <cstdio>
#include <cstring>
void Ansi::out(const char *str, Ansi::color fg, Ansi::color bg) { printf("\e[%d;%dm%s\e[0m", fg, bg + 10, str); }

void Ansi::out(const char *str, Ansi::color fg) { printf("\e[%dm%s\e[0m", fg, str); }

void Ansi::outln(const char *str, Ansi::color fg, Ansi::color bg) { printf("\e[%d;%dm%s\e[0m\n", fg, bg + 10, str); }

void Ansi::outln(const char *str, Ansi::color fg) { printf("\e[%dm%s\e[0m\n", fg, str); }
