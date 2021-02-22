#pragma once
#include "../Include/workerManager.h" //一定要用双引号
using namespace std;

WorkerManager::WorkerManager(/* args */)
{
    //初始化人数
    this->m_empNum = 0;
    //初始化数组指针
    this->m_empArray_ptr = nullptr;
}

WorkerManager::~WorkerManager()
{
}

void WorkerManager::showMenu()
{
    cout << "********************************************" << endl;
    cout << "*********  欢迎使用职工管理系统！ **********" << endl;
    cout << "*************  0.退出管理程序  *************" << endl;
    cout << "*************  1.增加职工信息  *************" << endl;
    cout << "*************  2.显示职工信息  *************" << endl;
    cout << "*************  3.删除离职职工  *************" << endl;
    cout << "*************  4.修改职工信息  *************" << endl;
    cout << "*************  5.查找职工信息  *************" << endl;
    cout << "*************  6.按照编号排序  *************" << endl;
    cout << "*************  7.清空所有文档  *************" << endl;
    cout << "********************************************" << endl;
    cout << endl;
}

void WorkerManager::exitSystem()
{
    system("read -p '任意键退出...' var");
    cout << "欢迎下次使用！" << endl;
    exit(0);
}

void WorkerManager::addEmployee()
{

    cout << "请输入员工数量：" << endl;

    int addNum = 0; //保存用户输入数量
    cin >> addNum;
    if (addNum > 0)
    {
        //添加
        //计算大小
        int newSize = this->m_empNum + addNum;
        //开辟新空间
        Worker **new_space_ptr = new Worker *[newSize];

        //将原来空间的数据拷贝进去
        if (this->m_empNum > 0)
        {
            for (int i = 0; i < this->m_empNum; i++)
            {
                new_space_ptr[i] = this->m_empArray_ptr[i];
            }
        }

        //添加新数据
        for (int i = 0; i < addNum; i++)
        {
            int id;
            string name;
            int dSelect;

            cout << "请输入第" << i + 1 << "个新职工编号：" << endl;
            cout << "请输入第" << i + 1 << "个新职工姓名：" << endl;
            cout << "请选择第" << i + 1 << "个新职工部门：" << endl;
        }
    }
    else
    {
        cout << "输入有误，请从新输入员工数量：" << endl;
    }
}