#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class Employee : public Worker
{
private:
    /* data */
public:
    Employee(int id, string name, int dId);
    ~Employee();
    void showInfo();
    string getDeptName();
};
