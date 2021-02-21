#pragma once
#include <iostream>
#include <string>

using namespace std;

/* 职工的分类为：普通员工、经理、老板
将三种职工抽象到一个类（worker）中,利用多态管理不同职工种类
职工的属性为：职工编号、职工姓名、职工所在部门编号
职工的行为为：岗位职责信息描述，获取岗位名称 */

class Worker
{
private:
    /* data */
public:
    Worker(/* args */);
    ~Worker();

    virtual void showInfo() = 0;
    virtual string getDeptName() = 0;

    int m_id;      //职工编号
    string m_name; //职工姓名
    int m_deptId;  //职工所在部门名称编号
};
