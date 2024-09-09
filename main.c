/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main for 103cipher
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test(char *str, char *str2, int d)
{
    char blabla[d][d];
    int a = strlen(str);
    int col = 0;
    int lines = 0;
    int count = 0;
    while (lines < d){
        while (col < d){
            if (count != a + 1){
                blabla[lines][col] = str[count];
                count = count + 1;
            }else{
                blabla[lines][col] = '\0';
            }
            col = col + 1;
        }
        col = 0;
        lines = lines + 1;
    }
    col = 0;
    lines = 0;
    while (lines < d){
        while (col < d){
            if (col != d - 1){
            printf("%-3i ", blabla[lines][col]);
            col = col + 1;
            }else {
                printf("%i", blabla[lines][col]);
                col = col + 1;
            }
        }
        printf("\n");
        col = 0;
        lines = lines + 1;
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    if (argc != 4)
        exit (84);
    if (argc == 1)
        exit (84);
    if (argv[3][0] != '0')
        exit (84);
    float c;
    int d;
    c = strlen(argv[2]);
    c = sqrt(c);
    d = ceil(c);
    printf("Key matrix:\n");
    test(argv[2], argv[1], d);
    return 0;
}
