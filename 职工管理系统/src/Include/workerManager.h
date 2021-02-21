#pragma once //防止头文件重复
#include <iostream>
using namespace std;

class WorkerManager
{
private:
    /* data */
public:
    WorkerManager(/* args */);

    void showMenu();   // 展示菜单
    void exitSystem(); //退出管理程序

    ~WorkerManager();
};
