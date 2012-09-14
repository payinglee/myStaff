#include<time.h>
#include<stdlib.h>
typedef enum hotel_type{
	BIG,MIDDLE,SMALL
}hotel_type;
typedef enum gender{
	MALE,FEMALE
}gender;
typedef enum user_type{
	ADMIN,GENERAL_USER
}user_type;

typedef struct hotel{
	int id;
	hotel_type type;
	int count;
	float fee;
	char *intro;
}hotel;
typedef struct user{
	char *ID;
	char *username;
	char *password;
	gender gender;
	int age;
}user;
typedef struct mapper{
	int hotel_id;
	char *user_id;
	time_t in_time;
	time_t out_time;
}mapper;

user* login(char *ID,char *password);
user* register_user(char *id,char *username,char *password,gender gender,int age);
int change_password(user *user,char *new_password);
/*	打印菜单	*/
void print_memu(user_type type);
/*	打印酒店的信息	*/
void print_hotel();
/*	预订酒店	*/
int book_totel(user *user,hotel_type type,int count,time_t in_time,time_t out_time);
/*	取消预订	*/
void cancel_totel(user *user,hotel *hotel[]);
/*	返回某类房间一段时间内的使用比例	*/
float get_rate(hotel_type type,time_t from,time_t to);
/*	查看某天房间的预订情况	*/
void print_rate_of_day(time_t day);
/*	统计一段时间某类型的的收入	*/
float get_income(time_t from,time_t to,hotel_type type);


