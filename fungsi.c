#include <stdio.h>
#include <my_global.h>
#include <mysql.h>
#include <string.h>
int main(int argc,char **argv)

{
FILE *fp = fopen ("haha.txt","r");
MYSQL *conn;
char server[100],user[100],password[200],dbname[200];
conn = mysql_init(NULL);
char line[1000];
printf("Enter Server Name : ");
fgets(server,100,stdin);
printf("Enter user :");
fgets(user,100,stdin);
printf("Enter mysql password : ");
fgets(password,200,stdin);
printf("Enter mysql dbname : ");
fgets(dbname,200,stdin);
mysql_real_connect(conn,server,user,password,dbname,0,NULL,0);
fgets(line,sizeof line, fp);
mysql_query(conn, line);
printf("Table Created\n");
return 0;
}
