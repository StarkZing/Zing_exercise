#ifndef __EXERCISE_2__
#define __EXERCISE_2__

/******************************************************************************/
/* Include files                                                              */
/******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

/******************************************************************************/
/* function define                                                            */
/******************************************************************************/

/******************************************************************************/
/* typedef                                                          */
/******************************************************************************/
typedef unsigned char       u8;
typedef signed   char       s8;
typedef unsigned short      u16;
typedef          short      s16;
typedef unsigned int        u32;
typedef          int        s32;
typedef unsigned long long  u64;
typedef          long long  s64;
typedef unsigned int        ticks;
typedef unsigned int 		size_t;
typedef unsigned char		uint8_t;
/******************************************************************************/
/* variable struct                                                            */
/******************************************************************************/
typedef struct stu_info_pro
{
    int f_age;
} Yi_info_pro;
typedef struct stu
{
    int Num;
    int Age;
    struct stu_info_pro Yi_info_pro;
} Yi;
/******************************************************************************/
/* variable extern                                                            */
/******************************************************************************/
//extern struct stu *YiInfo;

/******************************************************************************/
/* function extern                                                            */
/******************************************************************************/
// extern void Printf_info();

#endif
