#include <help50.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
  printf("hello, word\n");
  string answer = get_string("what's your name?");
  printf("hello, %s \n", answer);
}
