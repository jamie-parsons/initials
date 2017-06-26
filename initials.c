#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{

string s = get_string();

    while (s[0] == ' ')
        {
          s++;
        }
        
        {
    printf("%c", toupper(s[0]));
        }
{
    for (int i = 0; i < strlen(s); i++)
        
        if (s[i] == ' ' && s[i + 1] != ' ')
        {
          printf("%c", toupper(s[i + 1]));  
        }
      {
          
      }     
}
}     
   
        
