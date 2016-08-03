#include <my_global.h>
#include <mysql.h>

void finish_with_error(MYSQL *con)
{
  fprintf(stderr, "%s\n", mysql_error(con));
  mysql_close(con);
  exit(1);        
}

int coba(char* server, char* user ,char* password ,char* dbname,char* nama, int  umur, char* nm_table)
{      
  MYSQL *con = mysql_init(NULL);
  
  if (con == NULL)
  {
      fprintf(stderr, "mysql_init() failed\n");
      exit(1);
  }  
  
  if (mysql_real_connect(con, server, user, password, 
          dbname, 0, NULL, 0) == NULL) 
  {
      finish_with_error(con);
  }    
 
 char select[100];
sprintf(select,"select*from  %s ",nm_table); 
  //if (mysql_query(con, "SELECT * FROM %s",nm_table)) ;
  //{
  //    finish_with_error(con); 
  //}
if (mysql_query(con,select)) 

{
      finish_with_error(con);
  }
char insert[100];
sprintf(insert,"insert into %s values('','%s',%d)",nm_table,nama,umur);
 

if (mysql_query(con,insert)) 

{
      finish_with_error(con);
  }

 return coba (server, user ,password ,dbname,nama,umur, nm_table);
 
}


