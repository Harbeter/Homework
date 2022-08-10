#include<iostream>
#include<array>
#include<iomanip>
using namespace std;
//输入/输出操作： 
const int read=10;
const int write=11;
//载入和储存操作： 
const int load=20;
const int store=21;
//算数运算符 
const int add=30;
const int substract=31;
const int divide=32;
const int multiply=33;
//控制转移符 
const int branch=40;
const int branchneg=41;
const int branchzero=42;
const int halt=43;

//函数 
void start();//初始化 

int main()
{
	bool flag=1;
	while(flag)
	{
	array<int,100> memory={}; //内存
	array<char,100> memorychar;//内存符号 
	memorychar.fill('+');//初始化内存符号为'+'
	int accumulator=0; //寄存器 
	int instructionCounter=0; //当前内存地址 
	int tempinstructionRegister=0; //临时储存指令，以便划分操作码和操作数 
	int operationCode=0; //操作码
	int operand =0; //操作数
	int instructionRegister=0;//指令 
	int testinstructionRegister=0;//防止在最后99999插入指令 
	char sign='+';//正负号 
	start();
	//输入指令
	while(1) 
	{
		cout<<setfill('0')<<setw(2)<<instructionCounter<<" "<<"? ";
		cin>>sign>>testinstructionRegister;
		if(sign=='-'&&testinstructionRegister==99999)//停止输入的条件 
		{
			cout<<"*** Program loading completed ***"<<endl;
			cout<<"*** Program execution begins  ***"<<endl;
			break;
		}
		if(sign!='+'&&sign!='-')//验证符号正确性 
		{
			cout<<"Error Sign Input again."<<endl;
		}
		else if(testinstructionRegister>9999||testinstructionRegister<-9999)//验证代码正确性 
		{
			cout<<"Error code Input again."<<endl;
		}
		else//验证通过后地址码做加一操作，并将代码储存 
		{
			instructionRegister=testinstructionRegister;
			memorychar[instructionCounter]=sign;
			memory[instructionCounter]=instructionRegister;
			instructionCounter++;
		}
	}
	//处理指令 
	for(int i=0;i<=instructionCounter;i++)//每次处理一行代码 
	{
		tempinstructionRegister=memory[i];
		operationCode=tempinstructionRegister/100; //操作码
		operand=tempinstructionRegister%100; //操作数
		switch(operationCode)//操作码的选择和处理 
		{
			case 10://输入 
				cout<<"? ";
				cin>>memory[operand];
				break;
			case 11://输出 
				cout<<memory[operand]<<endl;
				break;
			case 20://载入 
				accumulator=memory[operand];
				break;
			case 21://储存 
				memory[operand]=accumulator;
				break;
			case 30://加 
				accumulator+=memory[operand];
				break;
			case 31://减 
				accumulator-=memory[operand];
				break;
			case 32://除 
				if(memory[operand]==0)
				{
					cout<<"*** Attempt to divide by zero ***"<<endl;
					cout<<"*** Simpletron execution abnormally terminated ***"<<endl;
				}
				accumulator/=memory[operand];
				break;
			case 33://乘 
				accumulator*=memory[operand];
				break;
			case 40://控制转移 
				i=operand;
				break;
			case 41://条件转移 
				if(accumulator<0)
				{
					i=operand-1;//最后i要+1，所以要在这里-1。 
				}
				break;
			case 42://条件转移 
				if(accumulator==0)
				{
					i=operand-1;
				}
				break;
			case 43://结束 
				instructionCounter=i;
				instructionRegister=4300;
				break;	
		}
	}
	//输出最终状态 
	{//打印数表之外的格式 
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
	cout<<"  ";// 打印第一行 
	for(int i=0;i<=9;i++)
	{
		cout<<setfill(' ')<<setw(6)<<i;
	}
	for(int i=0;i<100;i++)//打印数表
	{
		if(i%10==0)//输出换行符 
		{
			cout<<endl;
		}
		if(i%10==0)//输出第一列标码 
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

