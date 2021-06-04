#pragma once
#include<iostream>
using namespace std;
#include"ldentity.h"
#include<fstream>
#include<vector>
#include"student.h"
#include"teacher.h"
#include<algorithm>
#include"computerRoom.h"
class Manager :public Identity
{
public:

	//Ĭ�Ϲ���
	Manager();

	//�вι���  ����Ա����������
	Manager(string name, string pwd);

	//ѡ��˵�
	virtual void operMenu();

	//����˺�  
	void addPerson();

	//�鿴�˺�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//���ԤԼ��¼
	void cleanFile();

	//��ʼ��
	void initVector();

	//����ظ�
	bool checkRepeat(int id, int type);

	vector<Student>vStu;
	vector<Teacher>vTea;

	vector<ComputerRoom> vCom;
};