#pragma once
#include "../Include/employee.h" //一定要用双引号
using namespace std;

Employee::Employee(int id, string name, int dId)
{
    this->m_id = id;
    this->m_name = name;
    this->m_deptId = dId;
}

void Employee::showInfo()
{
    cout << "职工编号： " << this->m_id
         << " \t职工姓名： " << this->m_name
         << " \t岗位：" << this->getDeptName()
         << " \t岗位职责：完成经理交给的任务" << endl;
}

string Employee::getDeptName()
{
    return string("员工"); //QQQ为什么要转化一下，要多学习一下string
}