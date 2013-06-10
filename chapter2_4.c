#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[], char *env[])
{
  char *token = NULL;
  char colour1[256] = "";
  char colour2[256] = "";
  int wide = 0;
  int high = 0;
  int columns = 0;
  int rows = 0;
  token = (char *)strtok(argv[1], ":");
  strcpy(colour1, token);
  token = (char *)strtok(NULL, ":");
  strcpy(colour2, token);
  token = (char *) strtok(NULL, ":");
  wide = atoi(token);
  token = (char *) strtok(NULL, ":");
  high = atoi(token);
  printf("Content-type: text/html\n\n");
  printf("<html>\n");
  printf("<body bgcolor=\"%s\">\n", colour1);
  printf("<center>\n");
  printf("<table bgcolor=\"%s\" border=2>\n", colour2);
  for(rows=1; rows <= high; rows++)
  {
    printf("<tr>\n");
    for(columns=1; columns <= wide; columns++)
    {
      printf("<td><h6>row=%d cell=%d</h6></td>\n", rows, columns);
    }
    printf("</tr>\n");
  }
  printf("</table>\n");
  printf("</body>\n");
  printf("</html>\n");
  return 0;
}
