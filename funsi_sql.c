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
//char drop[100];
//sprintf(drop, "drop table if exists %s",nm_table);  

 //if (mysql_query(con, drop)) {
  //    finish_with_error(con);
  //}

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
int create_table(char* server, char* user ,char* password ,char* dbname,char* nm_table)
{
	char line[1000];
	{
		  MYSQL *con = mysql_init(NULL);
		  
		  if (con == NULL) 
		  {
		      fprintf(stderr, "%s\n", mysql_error(con));
		      exit(1);
		  } 
		if (mysql_real_connect(con, server, user, password,dbname, 0, NULL, 0 )== NULL)
		  {
		      finish_with_error(con);
		  }     

		char table[100];
		sprintf(table,"create table %s (id int primary key auto_increment,name varchar(25),umur int)",nm_table);
		 char *sql = table;
		 if (mysql_query(con, sql))
		  {    
		      finish_with_error(con);    
		  }
	}
} 



