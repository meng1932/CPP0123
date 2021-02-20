#include <iostream>
using namespace std;
#include "../Include/workerManager.h" //一定要用双引号

int main()
{
    //管理者对象
    WorkerManager wm;
    wm.Show_Menu();
    system("read -p '任意键...' var");
    system("clear");
    return 0;
}