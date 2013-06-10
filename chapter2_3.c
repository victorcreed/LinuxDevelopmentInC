#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[], char *env[])
{
  printf("Content-type: text/html\n\n");
  printf("<html> \n");
  printf("<body bgcolor=\"%s\">", argv[1]);
  printf("</body>\n");
  printf("</html>\n");
  return 0;
}

