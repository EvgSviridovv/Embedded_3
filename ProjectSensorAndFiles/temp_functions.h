#include <stdio.h>
#include <stdint.h>
#include <string.h>

struct sensor
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t sek;
    uint8_t temp;
};

//void SortByT(struct sensor* info,int n);

//void SortByDate(struct sensor* info,int n);

float AverageMonthTemp(struct sensor* info,int n,int month);

uint8_t MinMonthTemp(struct sensor* info,int n, int month);

uint8_t MaxMonthTemp(struct sensor* info,int n,int month);

float AverageYearTemp(struct sensor* info,int n,int year);

uint8_t MinYearTemp(struct sensor* info,int n, int year);

uint8_t MaxYearTemp(struct sensor* info,int n,int year);


