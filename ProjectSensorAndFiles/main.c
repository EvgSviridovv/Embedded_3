#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "temp_functions.h"

#define SIZE 30



void AddRecord(struct sensor *info, int number, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t sek, int8_t temp)
{

    info[number].year = year;
    info[number].month = month;
    info[number].day = day;
    info[number].hour = hour;
    info[number].sek = sek;
    info[number].temp = temp;
  
}


int AddInfo(struct sensor *info)
{
    int counter = 0;
    AddRecord(info, counter++, 2021, 9, 16, 13, 10 , 9);
    AddRecord(info, counter++, 2022, 9, 2, 14, 12 ,  -9);
    AddRecord(info, counter++, 2021, 1, 7, 15, 13 , 8);
    AddRecord(info, counter++, 2021, 9, 5,16 , 14,  1);
    return counter;
}

void print(struct sensor *info, int number)
{
    printf("===================================\n"); 
    for(int i=0;i<number;i++)
    printf("%04d-%02d-%02d t=%3d\n", 
    info[i].year,
    info[i].month,
    info[i].day,
    info[i].hour,
    info[i].sek,
    info[i].temp);
}
void cgangeIJ(struct sensor* info,int i, int j)
{
    struct sensor temp;
    temp=info[i];
    info[i]=info[j];
    info[j]=temp; 
}
void SortByT(struct sensor* info,int n)
{
    for(int i=0; i<n; ++i)
    for(int j=i; j<n; ++j)
    if(info[i].temp>=info[j].temp)
    cgangeIJ(info,i,j);
}

void SortByDate(struct sensor* info,int n)
{
    
}
int main(void)
{
    struct sensor info[SIZE];
    int number = AddInfo(info);
    print(info, number);
    printf("\nSort by t\n");
    SortByT(info, number);
    print(info, number);
    printf("\nSort by date\n");
    SortByDate(info, number);
    print(info, number);
    printf("Hello World!");
    return 0;
}
