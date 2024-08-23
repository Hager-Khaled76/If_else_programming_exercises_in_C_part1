
/*
 * If_else_programming_exercises_and_solutions in_C :part1
 *
 *  Created on: Aug 23, 2024
 *      Author: Hager Khaled
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
 //************1.Write a C program to find maximum between two numbers using if else************
   int num1,num2;
   printf("Input num1: ");
   scanf("%d",&num1);
   printf("Input num2: ");
   scanf("%d",&num2);
   if(num1>num2)
      printf("Maximum = %d",num1);
   else
     printf("Maximum =%d",num2);
    return 0;
    */



    /*
    //************2.Write a C program to find maximum between three numbers using ladder if else or nested if************
      int num1,num2,num3;
      printf("Input num1:");
      scanf("%d",&num1);
      printf("Input num2:");
      scanf("%d",&num2);
      printf("Input num3:");
      scanf("%d",&num3);
      if(num1>num2)
      {
          if(num1>num3)
            printf("Maximum is:%d",num1);
          else
            printf("Maximum is:%d",num3);

      }
      else
      {
         if(num2>num3)
           printf("Maximum is:%d",num2);
        else
            printf("Maximum is:%d",num3);
      }


      */


      /*

//***************3.Write a C program to check positive, negative or zero using simple if or if else.****************888
  int num;
  printf("Input number:");
  scanf("%d",&num);
  if(num>0)
    printf("%d is positive",num);
  else if (num<0)
    printf("%d is negative",num);
  else
    printf("%d is zero",num);


    */



    /*
//*************4.Write a C program to check whether a number is divisible by 5 and 11 or not using if else.***********
  int num;
  printf("Input number:");
  scanf("%d",num);
  if((num%5==0) && (num%11==0))
    printf("Number is divisible by 5 and 11");
  else
    printf("Number is not divisible by 5 and 11");


    */


/*
//*************5.Write a C program to check whether a number is even or odd using if else.************
  int num;
  printf("Input number:");
  scanf("%d",&num);
  if(num%2==0)
    printf("%d is even number",num);
  else
    printf("%d is not even number",num);


    */


/*

//***********6.Write a C program to check leap year using if else. How to check whether a given year is leap year or not in C programming************
  int year;
  printf("Input year: ");
  scanf("%d",&year);
  if(year%4==0)
  {
      if(year%100==0)
      {
          if(year%400==0)
            printf("%d is leap year.",year);
          else
            printf("%d is not leap year.",year);
      }
      else
        printf("%d is leap year.",year);
  }
  else
    printf("%d is not leap year.",year);


    */


/*
//*****************7.Write a C program to input a character from user and check whether the given character is alphabet or not using if else.************8
  char alpha;
  printf("Input character:");
  scanf("%c",&alpha);
  if((alpha >='a' && alpha<='z') || (alpha>='A'&& alpha<='Z' ))
    printf("'%c' is alphabet",alpha);
  else
    printf("'%c' is not alphabet",alpha);

*/



/*

//***********8.Write a C program to check whether an alphabet is vowel or consonant using if else*********8
  char ch;
  printf("Input character:");
  scanf("%c",&ch);
  if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||
     ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U')
        printf("'%c' is vowel",ch);
  else if((ch>='a' &&ch<='z')||(ch>='A' &&ch=='Z'))
    printf("'%c' is constant",ch);
  else
    printf("'%c' is not an alphabet");


    */


/*

//*******************9.Write a C program to input a character from user and check whether given character is alphabet, digit or special character using if else********
   char check;
   printf("Input any character: ");
   scanf("%c",&check);
   if((check >='a' && check <= 'z')||(check >= 'A' && check <= 'Z'))
    printf("'%c' is alphabet.", check);
   else if(check >='0' && check <='9')
    printf("'%c' is digit.", check);
   else
    printf("'%c' is not alphabet or digit.", check);



    */



    /*
//************10.Write a C program to input character from user and check whether character is uppercase or lowercase alphabet using if else.*************888
   char check;
   printf("Input character: ");
   scanf("%c",&check);
   if(check >='a' && check <='z')
     printf("'%c' is lowercase alphabet",check);
   else if(check >='A' && check <='Z')
     printf("'%c' is uppercase alphabet",check);
   else
     printf("'%c' is not an alphabet.", check);

    */


/*

//*************11.Write a C program to input week number(1-7) and print the corresponding day of week name using if else************
  int week;
  printf("Input week number:");
  scanf("%d",&week);
  if(week ==1)
    printf("Saturday");
  else if(week ==2)
    printf("Sunday");
  else if(week ==3)
    printf("Monday");
  else if(week ==4)
    printf("Tuesday");
  else if(week ==5)
    printf("Wednesday");
  else if(week ==6)
    printf("Thursday");
  else if(week ==7)
    printf("Friday");
    else
    printf("error! Please enter week number between 1-7.");


    */



    /*
//**********12.Write a C program to enter month number between(1-12) and print number of days in month using if else.***********
   int month;
   printf("Enter month number from(1:12): ");
   scanf("%d",&month);
   if(month ==1 || month ==3 || month ==5 || month ==7 || month ==8 || month ==10 || month ==12)
      printf("It contains 31 days.");
   else if(month ==4 ||month ==6 || month ==9 || month ==11 )
      printf("It contains 30 days.");
   else if (month ==2)
      printf("It contains 28/29 days.");
   else
    printf("error! Please enter month number between (1-12)");


    */






  //************13.  Write a C program to input amount from user and print minimum number of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount**********


    int num , count500,count200,count100,count50,count20,count10,count5,count2,count1;
    count500=count200=count100=count50=count20=count10=count5=count2=count1=0;
    printf("Input num: ");
    scanf("%d",&num);

    //If num is greater than 500 then, divide num by 500 to get maximum 500 . Store the division result in some variable say count500 = amt / 500;
    //After division, subtract the resultant num of 500 count from original num. Perform num = num - (count500 * 500).
    //Repeat above step, for each note 200, 100, 50, 20, 10, 5, 2 and 1.

    if(num>=500)
    {
        count500=num/500;
        num = num-count500*500;
    }
     if(num>=200)
    {
        count200=num/200;
        num -=count200*200;
    }
    if(num>=100)
    {
        count100=num/100;
        num -=count100*100;
    }
    if(num>=50)
    {
        count50=num/50;
        num -=count50*50;
    }
    if(num>=20)
    {
        count20=num/20;
        num -=count20*20;
    }
    if(num>=10)
    {
        count10=num/10;
        num -=count10*10;
    }
    if(num>=5)
    {
        count5=num/5;
        num -=count5*5;
    }
    if(num>=2)
    {
        count2=num/2;
        num -=count2*2;
    }
    if(num>=1)
    {
        count1=num/1;
    }

    printf("Total number of notes: \n");
    printf("500:%d\n",count500);
    printf("200:%d\n",count200);
    printf("100:%d\n",count100);
    printf("50:%d\n",count50);
    printf("20:%d\n",count20);
    printf("10:%d\n",count10);
    printf("5:%d\n",count5);
    printf("2:%d\n",count2);
    printf("1:%d\n",count1);



}
