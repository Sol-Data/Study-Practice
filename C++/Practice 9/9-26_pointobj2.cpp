#include <iostream>
using namespace std;

class Dog
{
  public:
    Dog(char name[], int age, int weight);
    void showData();
  private:
    char Name[20];
    unsigned int Age;
    unsigned int Weight;
};

Dog::Dog(char name[], int age, int weight)
{
  strcpy(Name, name);
  Age = age;
  Weight = weight;
}

void Dog::showData()
{
  cout << "�̸�: " << Name << ", ";
  cout << "����: " << Age << ", ";
  cout << "������: " << Weight << endl;
}

int main()
{
  Dog ar[3] = {Dog("����", 3, 4),
               Dog("�޸�", 5, 6),
               Dog("������", 7, 8)};
  
  Dog *pt = ar; // ��ü �迭�� �����ּ� ar�� ������ pt�� ����
  pt->showData();      // ��ü 1�� ��� ���� ���
  (pt+1)->showData(); // ��ü 2�� ��� ���� ���
  (pt+2)->showData(); // ��ü 3�� ��� ���� ���

  system("PAUSE");
  return 0;
}
