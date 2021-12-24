//#pragma once
#ifndef CHAT_DATABASE_H
#define CHAT_DATABASE_H

#include <mysql/mysql.h>
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class ChatDataBase
{
private:
	MYSQL* mysql; // 创建一个操作mysql数据库对象，包含头文件#include <mysql/mysql.h>
public:
	ChatDataBase();
	~ChatDataBase();

	void my_database_connect(const char* name);                    // 连接某个数据库（数据库名字）
	int my_database_get_group_name(string*);                       // 获取群聊个数，并把名称,放到参数string中
	void my_database_get_group_member(string, string&);            // 获取第一个参数的群聊名称，把群成员放到第二个参数中
	bool my_database_user_exist(string);
	void my_database_user_password(string, string);
	bool my_database_password_correct(string, string);
	bool my_database_is_friend(string, string);
	void my_database_get_friend_group(string, string&, string&);
	void my_database_add_new_friend(string, string);
	bool my_database_group_exist(string);
	void my_database_add_new_group(string, string);
	void my_database_user_add_group(string, string);
	void my_database_group_add_user(string, string);
	void my_database_disconnect();								   // 断开当前连接的数据库
};

#endif

