#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int columns=10;
const int rows=10;
int a[columns][rows];
int co1, co2;

void clear()
{
	for (int i=0; i<columns; i++)
	{
		for (int j=0; j<rows; j++)
		{
			a[i][j]=0;
		}
	}
}
void show()
{
		for (int i=0; i<columns; i++)
	{
		for (int j=0; j<rows; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void fill()
{
	for (int i=0; i<columns; i++)
	{
		for (int j=0; j<rows; j++)
		{
			a[i][j]=rand()%9;
		}
	};
	
	for (int i=0; i<columns; i++)
	{
		for (int j=0; j<rows; j++)
		{
			if (a[i][j]!=0&&a[i][j]!=1&&a[i][j]!=2)
	{
	a[i][j]=1;	
	}
	else
	{
		a[i][j]=0;
	}
		}
	}
}

bool guess(int co1, int co2)
{
for (int i=0; i<columns; i++)
	{
		for (int j=0; j<rows; j++)
		{
			if (a[co1][co2]==1)
			{
				a[co1][co2]=2;
				return true;
			}
			else
			return false;
		}
	}	
}

int main()
{
	int c1,c2;
	srand(time(NULL));
	clear();
	show();
	fill();
	show();
	cout<<"please enter coords: "<<endl;
	cout<<"c1= ";
	cin>>c1;
	cout<<"c2= ";
	cin>>c2;
	guess(c1,c2);
	show();
	return 0;
}
