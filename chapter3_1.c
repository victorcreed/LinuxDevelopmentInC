#include <stdio.h>
#include <string.h>
#include <math.h>

double doit(int number1, int number2)
{
  return sqrt((double)(number1 + number2));
}

int main(int argc, char *argv[], char *env[])
{
  int n1 = 0, n2 = 0, i = 0;
  n1 = atoi((char *) strtok(argv[1], ":"));
  n2 = atoi((char *) strtok(NULL, ":"));
  printf("Content-type: text/html\n\n<html><body>\n");
  for(i=1; i<=100; i++) printf("%f", doit(n1+i,n2*i));
  printf("</body></html>\n");
  return 0;
}

