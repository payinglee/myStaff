#include"hotel.h"
#include<stdio.h>
#include<string.h>

static hotel big_hotel[300];
static hotel middle_hotel[30];
static hotel small_hotel[20];

//static user users[20];

static user admin = { NULL, "admin", "admin" };
user *users;
int main() {
	setbuf(stdout,NULL);
	char str[1]= {0};
	char *str1="iloveyou";
	printf("please a string:");
	scanf("%s",str);
	printf("%d\n",strlen(str));
	if(!strcmp(str,str1)) {
		printf("the same\n");
	} else {
		printf("not the same\n");
	}
//	//users[2].username="abc";
//	char a[20]="abcd";
//	printf("%d\n",users[1].username);
//	//int i = strcmp(a,users[1].username);
//	//
//	//user *user = NULL;
//	//user = &users[2];
//	//printf(user->username);
//	setbuf(stdout,NULL);
//	users = (user*)malloc(sizeof(user)*20);
//	char username[20], password[20];
//	int opt;
//	printf("1 登录\n2 注册\n");
//	opt = getchar();
//	if(opt=='1'){
//		printf("输入用户名和密码\n");
//		scanf("%s %s",username,password);
//		if(strcmp(username,admin.username)==0&&strcmp(password,admin.password)==0){
//            print_memu(ADMIN);
//		}else{
//            user *user = login(username,password);
//            if(user==NULL)
//                printf("用户不存在!\n");
//            else{
//
//            }
//		}
//	}else if(opt=='2'){
//
//	}
			return 0;
		}
user *login(char *username, char *password) {
	//user *user=users;
	while (users++ != NULL ) {
		if (strcmp(username, users->username) == 0
				&& strcmp(password, users->password) == 0) {
			break;
		}
	}
	return users;
}

void print_memu(user_type type) {
	if (type == ADMIN) {
		printf("r 查看房间使用率\n");
		printf("u 统计房间使用情况\n");
		printf("i 统计收入\n");
	} else if (type == GENERAL_USER) {
		printf("v 浏览房间信息\n");
		printf("b 预订房间\n");
		printf("c 取消预订\n");
	}
}
