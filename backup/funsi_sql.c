#include <my_global.h>
#include <mysql.h>

void finish_with_error(MYSQL *con)
{
  fprintf(stderr, "%s\n", mysql_error(con));
  mysql_close(con);
  exit(1);        
}

int funsi_sql(char* server, char* user ,char* password ,char* dbname,char* nama,int umur,char* nm_table)
{
char line[1000];
{
  MYSQL *con = mysql_init(NULL);
  
  if (con == NULL) 
  {
      fprintf(stderr, "%s\n", mysql_error(con));
      exit(1);
  }  

  if (mysql_real_connect(con, server, user, password, 
          dbname, 0, NULL, 0 )== NULL)
  {
      finish_with_error(con);
  }    

char insert[100];
sprintf(insert,"insert into %s values('','%s',%d)",nm_table,nama,umur); 

if (mysql_query(con,insert)) 

{
      finish_with_error(con);
  }
  

printf("data terkirim");
 
  mysql_close(con);
  exit(0);
}
}

