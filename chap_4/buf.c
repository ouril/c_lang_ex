#define BUFDIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch (void)
{
  return (bufp > 0) ? buf[--bufp] : getchar[];
}

void ungetch(int c)
{
  if (bufp >= BUFSIZE)
    printf("ungetch: to many characters\n", );
  else
    buf[bufp++] = c;
}
