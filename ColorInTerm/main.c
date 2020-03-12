/*
* @Author: Baptiste
* @Date:   2020-03-12 15:55:29
* @Last Modified by:   Baptiste
* @Last Modified time: 2020-03-12 16:46:16
*/

#define ESC   "\x1B"
#define RESET   "[0m"
#define BLACK   "[30m"
#define RED     "[31m"
#define GREEN   "[32m"
#define YELLOW  "[33m"
#define BLUE    "[34m"
#define MAGENTA "[35m"
#define CYAN    "[36m"
#define WHITE   "[37m"
#define BACKGROUNDBLACK   "[40m"
#define BACKGROUNDRED     "[41m"
#define BACKGROUNDGREEN   "[42m"
#define BACKGROUNDYELLOW  "[43m"
#define BACKGROUNDBLUE    "[44m"
#define BACKGROUNDMAGENTA "[45m"
#define BACKGROUNDCYAN    "[46m"
#define BACKGROUNDWHITE   "[47m"
#define BRIGHTBLACK   "[90m"
#define BRIGHTRED     "[91m"
#define BRIGHTGREEN   "[92m"
#define BRIGHTYELLOW  "[93m"
#define BRIGHTBLUE    "[94m"
#define BRIGHTMAGENTA "[95m"
#define BRIGHTCYAN    "[96m"
#define BRIGHTWHITE   "[97m"
#define BRIGHTBACKGROUNDBLACK   "[100m"
#define BRIGHTBACKGROUNDRED     "[101m"
#define BRIGHTBACKGROUNDGREEN   "[102m"
#define BRIGHTBACKGROUNDYELLOW  "[103m"
#define BRIGHTBACKGROUNDBLUE    "[104m"
#define BRIGHTBACKGROUNDMAGENTA "[105m"
#define BRIGHTBACKGROUNDCYAN    "[106m"
#define BRIGHTBACKGROUNDWHITE   "[107m"
#define BOLD        "[1m"
#define LIGHT       "[2m"
#define ITALIC      "[3m" //Not widely supported
#define UNDERLINE   "[4m"
#define BLINK       "[5m"
#define STOPBLINK   "[25m"
#define print my_putstr

int my_putchar(char c)
{
  write(1, &c, 1);
}

int my_putstr(char *str)
{
  if (str[0] != '\0')
    {
      my_putchar(str[0]);
      my_putstr(&str[1]);
    }
  return 0;
}

void test()
{
  print(ESC);
  print(BOLD);
  print(ESC);
  print(BRIGHTCYAN);
  print(ESC);
  print(BLINK);
  print("*");
  print(ESC);
  print(STOPBLINK);
  print("CECI EST UN TEST");
  print(ESC);
  print(BLINK);
  print("*");
  print(ESC);
  print(STOPBLINK);
  print(ESC);
  print(RESET);
  print("\n");
}

int main()
{
  write(1, "\033[33mbonjour\n", 13);
  my_putchar('A');
  my_putchar('\033');
  my_putchar('[');
  my_putchar('3');
  my_putchar('6');
  my_putchar('m');
  my_putstr("test one \n");
  my_putstr("\033[0m");
  my_putstr("test\n");
  my_putstr("\033[34m toto \033[0m\n");
  test();
  return 0;
}
