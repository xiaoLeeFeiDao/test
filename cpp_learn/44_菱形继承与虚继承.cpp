#include "cpp_learn.h"

class Animal {
public:
  int m_Age;
};
// ����� Sheep
class Sheep:virtual public Animal{
};
// ����� Tuo
class Tuo:virtual public Animal {
};
class SheepTuo :public Sheep, public Tuo
{
};

// ���μ̳������Դ�˷� ������̳н��
void test44()
{
  SheepTuo st;
  st.Sheep::m_Age = 10;
  st.Tuo::m_Age = 20;
  
  //SheepTuo�̳еĻ�����������麯��������m_Ageʱ��Ҫ�������򣬲�Ȼ���ж�����
  cout << st.Sheep::m_Age << endl;
  cout << st.Tuo::m_Age << endl;
  
  //ʹ����̳к�ʵ�����Ķ���st�ĳ�Ա����m_Age��Դ��ֻ��һ����
  st.m_Age = 30;
  cout << st.m_Age << endl;

}