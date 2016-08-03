#include <my_global.h>
#include <mysql.h>
#include <stdio.h>
int main(int arcg, char **argv)
{
printf("MYSQL client version :%s\n", mysql_get_client_info());
exit(0);
}
