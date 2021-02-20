#pragma once //防止头文件重复
#include <iostream>
using namespace std;

class WorkerManager
{
private:
    /* data */
public:
    WorkerManager(/* args */);

    void Show_Menu();   // 展示菜单
    void Exit_System(); //退出管理程序

    ~WorkerManager();
};
