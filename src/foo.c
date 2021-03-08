#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Our maps
char * maps[] = {"R", "G", "A"};
char * modes[] = {"El", "Es", "Re", "De", "Ho"};

//User input that is one int
char *userMap1[1];
char *userMap2[1];
char *userMap3[1];

char *userMaps[3];

int getMapOne();
int getMapTwo();
int getMapThree();
int getAllMaps();


int main(void)
{
    getAllMaps();
    
    return 0;
}
int getAllMaps()
{
    getMapOne();
    getMapTwo();
    getMapThree();
    userMaps[0] = userMap1[0];
    userMaps[1] = userMap2[0];
    userMaps[2] = userMap3[0];
    printf("M1 %s -- M2 %s -- M3 %s\n", userMaps[0], userMaps[1], userMaps[2]);
}
int getMapOne()
{
    printf("First Map (Choose One)\n");
    printf("1.R\t2.G\t3.A\n");
    fgets(userMap1[0], 2, stdin);
    if (strcmp(userMap1[0], "1") == 0)
    {
        userMap1[0] = maps[0];
    }
    else if (strcmp(userMap1[0], "2") == 0)
    {
        userMap1[0] = maps[1];
    }
    else if (strcmp(userMap1[0], "3") == 0)
    {
        userMap1[0] = maps[2];
    }
    else
    {
        printf("Invalid input.");
    }
    return 0;
}
int getMapTwo()
{
    printf("Second Map (Choose One)\n");
    printf("1.R\t2.G\t3.A\n");
    fgets(userMap2[0], 2, stdin);
    if (strcmp(userMap2[0], "1") == 0)
    {
        userMap2[0] = maps[0];
    }
    else if (strcmp(userMap2[0], "2") == 0)
    {
        userMap2[0] = maps[1];
    }
    else if (strcmp(userMap2[0], "3") == 0)
    {
        userMap2[0] = maps[2];
    }
    else
    {
        printf("Invalid input.");
    }
    return 0;
}
int getMapThree()
{
    printf("First Map (Choose One)\n");
    printf("1.R\t2.G\t3.A\n");
    fgets(userMap3[0], 2, stdin);
    if (strcmp(userMap3[0], "1") == 0)
    {
        userMap3[0] = maps[0];
    }
    else if (strcmp(userMap3[0], "2") == 0)
    {
        userMap3[0] = maps[1];
    }
    else if (strcmp(userMap3[0], "3") == 0)
    {
        userMap3[0] = maps[2];
    }
    else
    {
        printf("Invalid input.");
    }
    return 0;
}
