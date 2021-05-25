/*Write a program to do basic string compression for a character which is consecutively
repeated more than once, replace consecutive duplicate occurrences with the count of
repetitions.

e.g. If a string has x repeated 5 times , replace this xxxxx with “x5”

Sample Input:
aaabbccdsa

Sample Output:
a3b2c2dsa*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void compressed(char* str,int len) 
{ 
	int i;
    for (i = 0; i < len; i++) 
    { 
        int count = 1; 
        while (i < len - 1 && str[i] == str[i + 1]) { 
            count++; 
            i++; 
        }
        if (count == 1)
        {
          printf("%c",str[i]);
        }
        else
        {
          printf("%c%d",str[i],count);
        }
         
    } 
} 

int main() 
{
  
  char str[] = "aaabbbccdsa"; 
  int len = sizeof(str)/sizeof(str[0]);
  compressed(str,len); 
  return 0;
}
