#include<iostream>
using namespace std;
struct stackimp
{
	int top;
	int *s;
	int size;
};
class stack
{
	struct stackimp si;
public:
	stack()
	{
		si.top = -1;
		si.s = NULL;
		si.size = 0;
	}
	void get_size(int n)
	{
		si.size = n;
		si.s = new int[n];
	}
	bool IsFull()
	{
		return(si.top == (si.size - 1));
	}
	bool IsEmpty()
	{
		return(si.top == -1);
	}
	void push(int ele)
	{
		if (!IsFull())
			si.s[++si.top] = ele;
		else
			cout << "the stack is full;" << endl;
	}
	int pop()
	{
		int x = -999;
		if (!IsEmpty())
			x = si.s[si.top--];
		else
			cout << "stack is empty;" << endl;
		return x;
	}
	void display()
	{
		for (int i = 0; i <=si.top; i++)
			cout << si.s[i];
	}
	//int peek()
	
};
int main() {
	stack s1;
	//int y;
	//cout << "enter the size:" << endl;
	//cin >> y;
	s1.get_size(6);
	s1.push(3);
	s1.push(6);
	s1.push(3);
	s1.pop();
	s1.pop();
	s1.display();
	system("pause");
	
}