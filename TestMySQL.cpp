////
//// https://github.com/flurreh/mysqlquerypp
////
//
//#include <iostream>
//#include "mysqlquery.h"
//#include <time.h>
//
//using namespace std;
//
//int main()
//{
//
//	MySQLConnection mySqlCon;
//
//	if (!mySqlCon.Connect("127.0.0.1", 3306, "root", "123456", "wd"))
//	{
//		cout << "Error db connection " << endl;
//		return 0;
//	}
//
//	cout << "Connection Success " << endl;
//
//	MySQLQuery query(&mySqlCon, "SELECT * FROM tbl_student;");
//	if (query.ExecuteQuery())
//	{
//		unsigned int row = query.GetResultRowCount();
//		unsigned int col = query.GetFieldCount();
//		for (unsigned int r = 0; r < row; ++r)
//		{
//			cout << "name = " << query.getString(r + 1, "name")
//				 << ", age = " << query.getString(r + 1, "age")
//				 << ", sex = " << query.getString(r + 1, "sex") << endl;
//		}
//	}
//
//	MySQLQuery insertQuery(&mySqlCon, "INSERT INTO tbl_student VALUES ('shihan', '12', 1); ");
//	if (insertQuery.ExecuteInsert())
//	{
//		cout << "Success Query Insert" << endl;
//	}
//
//	MySQLQuery updateQuery(&mySqlCon, "UPDATE tbl_student SET sex = 1 WHERE  name = 'shihan'; ");
//	if (updateQuery.ExecuteUpdate())
//	{
//		cout << "Success Query Update" << endl;
//	}
//
//	MySQLQuery deleteQuery(&mySqlCon, "DELETE FROM tbl_student WHERE  name = 'shihan'; ");
//	if (deleteQuery.ExecuteDelete())
//	{
//		cout << "Success Query Delete" << endl;
//	}
//
//	MySQLQuery query1(&mySqlCon, "SELECT * FROM tbl_student;");
//	if (query1.ExecuteQuery())
//	{
//		unsigned int row = query.GetResultRowCount();
//		unsigned int col = query.GetFieldCount();
//		for (unsigned int r = 0; r < row; ++r)
//		{
//			cout << "name = " << query.getString(r + 1, "name")
//				<< ", age = " << query.getString(r + 1, "age")
//				<< ", sex = " << query.getString(r + 1, "sex") << endl;
//		}
//	}
//
//	mySqlCon.Disconnect();
//
//	
//	return 0;
//}


#include "md5.h"
#include <iostream>

using namespace std;





int main() 
{
	
	system("pause");
	return 0;
}