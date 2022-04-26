---
title: C++中的结构体
tags: C++
---

# 结构体基本概念

结构体属于用户自定义的数据类型，允许用户存储不同的数据类型

# 结构体的定义和使用

语法：`struct 结构体名 {结构体成员列表};` 

通过结构体创建变量的三种方式：

- `struct 结构体名 变量名`

- `struct 结构体名 变量名={成员1值,成员2值...}`

- 定义结构体时顺便创建变量

  <!--more-->

```c++
#include <iostream>
#include <string>//下面有string数据类型，需要该头
using namespace std;
int main()
{
   //创建学生结构体
   struct student
   {
       //成员列表

       //姓名
       string name;
       //年龄
       int age;
       //分数
       int score;
   };
   //1.struct student s1
   struct student s1;
   s1.name="张三";
   s1.age=18;
   s1.score=100;
   cout<<"姓名："<<s1.name<<"\n年龄："<<s1.age<<"\n分数："<<s1.score<<endl;
   cout<<endl;
   //2.struct student s2={...}
   struct student s2={"李四",18,90};
   cout<<"姓名："<<s2.name<<"\n年龄："<<s2.age<<"\n分数："<<s2.score<<endl;

    return 0;
}

```

```C++
#include <iostream>
#include <string>
using namespace std;
int main()
{
   //创建学生结构体
   struct student
   {
       //成员列表

       //姓名
       string name;
       //年龄
       int age;
       //分数
       int score;
   }s3;//此处加一s3，这种方式用的少
   s3.name="王五";
   s3.age=20;
   s3.score=80;
   cout<<"姓名："<<s3.name<<"\n年龄："<<s3.age<<"\n分数："<<s3.score<<endl;

    return 0;
}

```

创建变量时的struct可省

# 结构体数组

作用：将定义的结构体放入到数组中方便维护

语法：`struct 结构体名 数组名[元素个数]={{},{}...{}}`       这里插一句题外话，hexo发布文件时，这篇老是上不去，最后发现是花括号里不能有花括号，除非变成代码块

```C++
#include <iostream>
#include <string>
using namespace std;
   //1.创建学生结构体
   struct student
   {
       //姓名
       string name;
       //年龄
       int age;
       //分数
       int score;
   };
int main()
{
    //2.创建结构体数组
    struct student stuarr[]
    {
        {"张三",18,100},
        {"李四",19,90},
        {"王五",20,80}
    };
    //3.给结构体数组中的元素赋值
    stuarr[1].name="李8";
    //4.遍历结构体数组
    for(int i=0;i<3;i++)
    {
        cout<<"name:"<<stuarr[i].name<<"\nage:"<<stuarr[i].age<<"\nscore:"<<stuarr[i].score<<endl<<endl;
    }
    return 0;
}

```

# 结构体指针

作用：通过指针访问结构体中的成员

利用操作符`->`可以通过结构体指针访问结构体属性

```C++
#include <iostream>
#include <string>
using namespace std;
   //1.创建学生结构体
   struct student
   {
       //姓名
       string name;
       //年龄
       int age;
       //分数
       int score;
   };
int main()
{
    //2.创建结构体
    struct student s={"张三",18,100};
    //3.通过指针指向结构体变量
    struct student *p =&s;
    //4.通过指针指向结构体变量
    cout<<"name:"<<p->name<<"\nage:"<<p->age<<"\nscore:"<<p->score<<endl;
    cout<<"name:"<<(*p).name<<"\nage:"<<(*p).age<<"\nscore:"<<(*p).score<<endl;
    //以上两种输出方式等价
    return 0;
}

```

# 结构体嵌套结构体

作用：结构体中的成员可以是另一个结构体

例如：每个老师辅导一个学生，一个老师的结构体中，记录一个学生的结构体

```C++
#include <iostream>
#include <string>
using namespace std;
    //创建学生结构体
    struct student
    {
        string name;
        int age;
        int score;
    };


   //创建老师结构体
   struct teacher
   {
       string name;
       int age;
       struct student stu;
   };
int main()
{
    //创建老师
    teacher t;
    t.name="老王";
    t.age=60;
    t.stu.name="小王";
    t.stu.age=20;
    t.stu.score=100;

    cout<<"teacher's name:"<<t.name<<"\nteacher's age:"<<t.age
    <<"\nteacher's student's name:"<<t.stu.name<<"\nteacher's student's age"<<t.stu.age
    <<"\nteacher's student's score:"<<t.stu.score<<endl;
    return 0;
}
```

 

