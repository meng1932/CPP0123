#pragma once //防止头文件重复
#include <iostream>
using namespace std;
#include "worker.h";

//用户在批量创建时，可能会创建不同种类的职工
//如果想将所有不同种类的员工都放入到一个数组中，可以将所有员工的指针维护到一个数组里
//如果想在程序中维护这个不定长度的数组，可以将数组创建到堆区，并利用Worker **的指针维护

class WorkerManager
{
private:
    /* data */
public:
    WorkerManager(/* args */);
    //记录文件中的人数个数
    int m_empNum;

    //员工数组的指针
    Worker **m_empArray_ptr;

    void showMenu();    // 展示菜单
    void exitSystem();  //退出管理程序
    void addEmployee(); //增加职工

    ~WorkerManager();
};
