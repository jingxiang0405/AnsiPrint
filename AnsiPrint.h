namespace Ansi{
enum color{
  black = 30, red, green, yellow, blue, purple, cyan, white, nochange
};

void out(const char* str, color fg, color bg);

void out(const char* str, color fg);

void outln(const char* str, color fg, color bg);

void outln(const char* str, color fg);

};


