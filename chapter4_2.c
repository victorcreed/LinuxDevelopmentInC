#include <stdio.h>
#include <string.h>

void decode_value(const char *key, char *value, int size){
  int length = 0, i = 0, j = 0;
  char *pos1 = '\0', *pos2 = '\0';
  if( (pos1 = strstr((char *)getenv("QUERY_STRING"), key)) != NULL)
  {
    for( i = 0; i< strlen(key); i++) pos1++;
    if ( (pos2 = strstr(post, "&")) != NULL)
      length = pos2 - pos1;
    else length = strlen(pos1);
    for( i = 0, j = 0; i < length ; i++, j++)
    {
      if (j < size) value[j] = pos1[i];
    }
    if(j < size) value[j] = '\0';
    else value[size-1] = '\0';
  }
}

int main(int argc, char *argv[], char *env[])
{
  printf("Content-type: text/html\n\n<html><body bgcolor=#23abe2>\n");
  char value[255] ="";
  strncpy(value, (char *) getenv("QUERY_STRING"), 255);
  printf("QUERY_STRING: %s
