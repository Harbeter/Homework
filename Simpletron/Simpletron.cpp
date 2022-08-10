#include<iostream>
#include<array>
#include<iomanip>
using namespace std;
//����/��������� 
const int read=10;
const int write=11;
//����ʹ�������� 
const int load=20;
const int store=21;
//��������� 
const int add=30;
const int substract=31;
const int divide=32;
const int multiply=33;
//����ת�Ʒ� 
const int branch=40;
const int branchneg=41;
const int branchzero=42;
const int halt=43;

//���� 
void start();//��ʼ�� 

int main()
{
	bool flag=1;
	while(flag)
	{
	array<int,100> memory={}; //�ڴ�
	array<char,100> memorychar;//�ڴ���� 
	memorychar.fill('+');//��ʼ���ڴ����Ϊ'+'
	int accumulator=0; //�Ĵ��� 
	int instructionCounter=0; //��ǰ�ڴ��ַ 
	int tempinstructionRegister=0; //��ʱ����ָ��Ա㻮�ֲ�����Ͳ����� 
	int operationCode=0; //������
	int operand =0; //������
	int instructionRegister=0;//ָ�� 
	int testinstructionRegister=0;//��ֹ�����99999����ָ�� 
	char sign='+';//������ 
	start();
	//����ָ��
	while(1) 
	{
		cout<<setfill('0')<<setw(2)<<instructionCounter<<" "<<"? ";
		cin>>sign>>testinstructionRegister;
		if(sign=='-'&&testinstructionRegister==99999)//ֹͣ��������� 
		{
			cout<<"*** Program loading completed ***"<<endl;
			cout<<"*** Program execution begins  ***"<<endl;
			break;
		}
		if(sign!='+'&&sign!='-')//��֤������ȷ�� 
		{
			cout<<"Error Sign Input again."<<endl;
		}
		else if(testinstructionRegister>9999||testinstructionRegister<-9999)//��֤������ȷ�� 
		{
			cout<<"Error code Input again."<<endl;
		}
		else//��֤ͨ�����ַ������һ�������������봢�� 
		{
			instructionRegister=testinstructionRegister;
			memorychar[instructionCounter]=sign;
			memory[instructionCounter]=instructionRegister;
			instructionCounter++;
		}
	}
	//����ָ�� 
	for(int i=0;i<=instructionCounter;i++)//ÿ�δ���һ�д��� 
	{
		tempinstructionRegister=memory[i];
		operationCode=tempinstructionRegister/100; //������
		operand=tempinstructionRegister%100; //������
		switch(operationCode)//�������ѡ��ʹ��� 
		{
			case 10://���� 
				cout<<"? ";
				cin>>memory[operand];
				break;
			case 11://��� 
				cout<<memory[operand]<<endl;
				break;
			case 20://���� 
				accumulator=memory[operand];
				break;
			case 21://���� 
				memory[operand]=accumulator;
				break;
			case 30://�� 
				accumulator+=memory[operand];
				break;
			case 31://�� 
				accumulator-=memory[operand];
				break;
			case 32://�� 
				if(memory[operand]==0)
				{
					cout<<"*** Attempt to divide by zero ***"<<endl;
					cout<<"*** Simpletron execution abnormally terminated ***"<<endl;
				}
				accumulator/=memory[operand];
				break;
			case 33://�� 
				accumulator*=memory[operand];
				break;
			case 40://����ת�� 
				i=operand;
				break;
			case 41://����ת�� 
				if(accumulator<0)
				{
					i=operand-1;//���iҪ+1������Ҫ������-1�� 
				}
				break;
			case 42://����ת�� 
				if(accumulator==0)
				{
					i=operand-1;
				}
				break;
			case 43://���� 
				instructionCounter=i;
				instructionRegister=4300;
				break;	
		}
	}
	//�������״̬ 
	{//��ӡ����֮��ĸ�ʽ 
	char endchar='+';
	cout<<"*** Simpletron execution terminated ***"<<endl;
	cout<<endl;
	cout<<"REGISTERS:"<<endl;
	if(accumulator>9999||accumulator<-9999)
	{
		cout<<"*** accumulator is error ***"<<endl;
		cout<<"*** Simpletron execution abnormally terminated ***"<<endl;
		return 0;
	}
	if(accumulator<0)
	{
		endchar='-';
		accumulator=-accumulator;
	}
	cout<<left<<setfill(' ')<<setw(21)<<"accumulator"<<endchar<<setfill('0')<<right<<setw(4)<<accumulator<<endl;
	cout<<"instructionCounter      "<<setw(2)<<instructionCounter<<endl;
	cout<<"instructionRegister  +"<<instructionRegister<<endl;
	cout<<"operationCode           "<<setw(2)<<operationCode<<endl;
	cout<<"operand                 "<<setw(2)<<operand<<endl;
	cout<<endl;
	cout<<"MEMORY:"<<endl;
	}
	cout<<"  ";// ��ӡ��һ�� 
	for(int i=0;i<=9;i++)
	{
		cout<<setfill(' ')<<setw(6)<<i;
	}
	for(int i=0;i<100;i++)//��ӡ����
	{
		if(i%10==0)//������з� 
		{
			cout<<endl;
		}
		if(i%10==0)//�����һ�б��� 
		{
			cout<<right<<setw(2)<<i;
		}
		
		cout<<" "<<memorychar[i]<<setfill('0')<<setw(4)<<memory[i];
		
	}
	cout<<endl;
	cout<<"**************************************************************"<<endl;
	cout<<"*** enter 1 to again. ***"<<endl;
	cout<<"*** enter 0 to exit.  ***"<<endl;
	cout<<"? ";
	cin>>flag;
	}
	return 0;
}
void start()
{
	cout<<"*** Welcome to Simpletron!                    ***"<<endl;
	cout<<"*** Please enter your program one instruction ***"<<endl;
	cout<<"*** (or data word) at a time .I will type the ***"<<endl;
	cout<<"*** location number and a question mark (?).  ***"<<endl;
	cout<<"*** You then type the word for that location. ***"<<endl;
	cout<<"*** Type the sentinel -99999 to stop entering ***"<<endl;
	cout<<"*** your program.                             ***"<<endl;
}

