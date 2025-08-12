#include <stdio.h>
struct MyStruct
{
    int num;
    char letter;
};
int main()
{
    struct MyStruct s1;
    s1.num = 19;
    s1.letter = 'P';
    printf("Number: %d,  Letter: %c \n", s1.num, s1.letter);
    return 0;
}