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
	stuList.init(); //�����ļ����ݳ�ʼ��
	stuList.menu(); //�����˵�
	return 0;
}
