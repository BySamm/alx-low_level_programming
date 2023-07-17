#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/wait.h>
#include <time.h>
//#include <readline/history.h>
//#include <readline/readline.h>

char *find_and_copy(const char *s1, const char *s2)
{
  const char *found = strstr(s1, s2);
  if (found == NULL) {
    return NULL;
  }

  size_t start = found - s1;
  size_t len = strlen(s2);
  char *res = malloc(len + 1);
  if (res == NULL) {
    perror("malloc");
    exit(1);
  }
  strncpy(res, s1 + start, len);
  res[len] = '\0';
  return res;
}

void  _tok()
{
  char *tok;
  char * get_path = getenv("PATH");
  printf("%s",get_path);
  tok = strtok(get_path,":");
  printf("tok : %s",tok);
  char *get_usr = getenv("USER");
  printf("%s",get_usr);
  char *find ;
  find = find_and_copy(get_path,"/usr/bin");
  char *find_2 = malloc(sizeof(char) * strlen(find) + 10);
  find_2 = strcat(find,"/");
  printf(" find:%s",find_2);

}
void get_line(char **av)
{
  _tok();
  size_t size = 1000;
  size_t tst;
  printf("$>");
  tst = getline(av,&size,stdin);
}
int main(int ac,char **av)
{
  while(1)
  {
    get_line(av);
  }
}
