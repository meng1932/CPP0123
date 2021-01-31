#include <iostream>
#include <string>

#define ADDRESS_BOOK_MAX 1000 //有#(preprocess)，在换行之前所有东西都会被replace
//int MAX=1000;
using namespace std;
//设计联系人
struct Person
{
    string m_name;
    int m_age;
    int m_sex; //0 female, 1 male, other error
    string m_phone;
    string m_address;
};
//设计通讯录
struct AddressBook
{
    Person person_array[ADDRESS_BOOK_MAX];
    int m_size;
};
// 封装函数显示界面
void showMenu()
{
    cout << "************************" << endl;
    cout << "*  1.添加联系人          *" << endl;
    cout << "*  2.显示联系人          *" << endl;
    cout << "*  3.删除联系人          *" << endl;
    cout << "*  4.查找联系人          *" << endl;
    cout << "*  5.修改联系人          *" << endl;
    cout << "*  6.清空联系人          *" << endl;
    cout << "*  0.退出通信录          *" << endl;
    cout << "************************" << endl;
}
//封装 添加联系人：上线1000人，姓名性别年龄，联系电话，家庭住址
void addPerson(AddressBook *p_addressBook)
{
    //上线1000人
    if (p_addressBook->m_size == ADDRESS_BOOK_MAX)
    {

        cout << "通信录已满，无法添加" << endl;
        return;
    }
    else
    {
        //姓名
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        p_addressBook->person_array[p_addressBook->m_size].m_name = name;

        //性别
        int sex = 0;
        cout << "请输入性别：（1--男，2--女）" << endl;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                p_addressBook->person_array[p_addressBook->m_size].m_sex = sex;
                break;
            }
            cout << "输入错误，请重新输入：（1--男，2--女）" << endl;
        }

        //年龄
        int age;
        cout << "请输入年龄：" << endl;
        cin >> age;
        p_addressBook->person_array[p_addressBook->m_size].m_age = age;

        //联系电话
        string phone;
        cout << "请输入联系电话：" << endl;
        cin >> phone;
        p_addressBook->person_array[p_addressBook->m_size].m_phone = phone;

        //家庭住址
        string address;
        cout << "请输入家庭住址：" << endl;
        cin >> address;
        p_addressBook->person_array[p_addressBook->m_size].m_address = address;

        //增加联系人
        p_addressBook->m_size++;
        cout << "添加成功" << endl;
        system("read -p '添加成功，任意键继续 ...' var"); //任意键继续
        system("clear");                                  //system("cls");
        return;
    }
}
//封装 显示联系人
void showPerson(AddressBook *p_addressBook)
{
}

int main()
{
    int select = 0;
    AddressBook addressBook;
    addressBook.m_size = 0;
    while (true) //并不是死循环，有0就
    {
        showMenu();
        cin >> select;
        switch (select)
        {
        case 1:
            //1.添加联系人
            addPerson(&addressBook); //利用地址传递
            break;
        case 2: //2.显示联系人
            showPerson(&addressBook);
            break;
        case 3: //3.删除联系人
            /* code */
            break;
        case 4: //4.查找联系人
            /* code */
            break;
        case 5: //5.修改联系人
            /* code */
            break;
        case 6: //6.清空联系人
            /* code */
            break;
        case 0: //0.退出通信录
            cout << "欢迎下次使用！" << endl;
            return 0;
        default:
            cout << "输入错误，请重新输入。" << endl;
            break;
        }
    }
    system("read -p '任意键...' var");
    return 0;
}