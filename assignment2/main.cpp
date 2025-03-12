#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include "StudentList.h"
using namespace std;

int main()
{
	StudentList stuList;
	stuList.init(); //读入文件数据初始化
	stuList.menu(); //打开主菜单
	return 0;
}
