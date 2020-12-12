#include<iostream>
#include<string.h>

using namespace std;


char arr[10][4] = {
					{'\0','\0','\0','\0'},
					{'\0','\0','\0','\0'},
					{'a','b','c','\0'},
					{'d','e','f','\0'},
					{'g','h','i','\0'},
					{'j','k','l','\0'},
					{'m','n','o','\0'},
					{'p','q','r','s'},
					{'t','u','v','\0'},
					{'w','x','y','z'}
};

//234

string output ="";

void Arrange(int N, int len)
{
	if(N != 0)
	{
		for(int i=0; i<4; i++)
		{
			if(arr[N%10][i] != '\0')
			{
				output = output + arr[N%10][i];
				if(len == output.length())
				{
					cout<<output<<endl;
				}
				Arrange(N/10, len);
				output = output.substr(0, output.length()-1);
			}
		}	
	}
}

int main()
{
	int N;
	cin>>N;
	int k = 0;
	int len = 0;
	while(N!=0)
	{
		k = k * 10 + N%10;
		N = N/10;
		len++;
	}
	Arrange(k, len);
}
