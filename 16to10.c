#include <stdio.h>
#include <math.h>
#include <string.h>

int CheckArray(char* array)
{
    if (*array && strspn(array,"0123456789abcdef.,")==strlen(array))
    {
        return 1;
    }
    else
    {
        printf("Chyba");
        return 0;
    }
}

int AmountIntNum(char* array)
{
    int i;
    for(i = 0; i < strlen(array); i++)
    {
        if(array[i] == '.' || array[i] == ',')
        {
            break;
        }
    }
    return i-1;
}

int SwitchHexToDec(char c)
{
    switch(c)
    {
        case 'a':
        return 10;
        case 'b':
        return 11;
        case 'c':
        return 12;
        case 'd':
        return 13;
        case 'e':
        return 14;
        case 'f':
        return 15;
        default:
        return (int)c - 48;
    }
}

double ConvertTo(char* array)
{
    int j = AmountIntNum(array);
    double sum = 0;
    for(int i = 0; i < strlen(array); i++)
    {
        if(array[i] == '.' || array[i] == ',')
        {
            continue;
        }
        sum += SwitchHexToDec(array[i]) * pow(16, j);
        j--;
    }
    return sum;
}

int main()
{
    char array[50];
    printf("Zadejte cislo v 16: ");
    scanf("%s", &array);
    if(!CheckArray(array)) {return 0;}
    printf("result: %f", ConvertTo(array));
	return 1;
}