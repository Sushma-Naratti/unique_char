#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int firstUniqChar(char *s)
{

      for (int i = 0; i < strlen(s); i++)
      {
            int flag = 1;
            for (int j = 0; j < strlen(s); j++)
            {
                  if (i != j && s[i] == s[j])
                  {
                        flag = 0;
                        break;
                  }
            }
            if (flag != 0)
            {
                  return i;
            }
      }
      return -1;
}

int main()
{
      char *s[50];
      printf("Enter any string:");
      scanf("%s", s);
      int res = firstUniqChar(s);
      if (res != -1)
      {
            printf("First unique character is present at index:%d\n", res);
      }
      else
      {
            printf("string does not contain any unique character..\n");
      }
}