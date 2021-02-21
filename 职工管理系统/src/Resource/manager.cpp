#pragma once
#include "../Include/manager.h" //一定要用双引号
using namespace std;

Manager::Manager(int id, string name, int dId)
{
    this->m_id = id;
    this->m_name = name;
    this->m_deptId = dId;
}
void Manager::showInfo()
{
    cout << "职工编号： " << this->m_id
         << " \t职工姓名： " << this->m_name
         << " \t岗位：" << this->getDeptName()
         << " \t岗位职责：完成老板交给的任务，并且下发任务" << endl;
}
string Manager::getDeptName()
{
    return string("经理");
}