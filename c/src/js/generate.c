#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("hello.js", "w");

    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    fputs("// hello.js from C\n"
          "const greet = () => {\n"
          "  console.log('hello, world!');\n"
          "};\n"
          "\n"
          "greet();\n",
          fp);

    fclose(fp);
    puts("JS is the worst language ever");

    return 0;
}
