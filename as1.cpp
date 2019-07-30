#include<iostream>
#include<fstream>
using namespace std;
void Encryption(string,int);
void Decryption(string,int);	
int main()
{

	int k,n;
	string msg;
	cout<<"Enter any msg in small words\n";
	getline(cin,msg);
	cout<<"Enter the key Element\n";
	cin>>k;
	k%=26;
	ofstream outfile ("test1.txt");
	outfile << msg << endl;
	
	cout<<"Press 1: Encryption\n Press 2: Decryption\n";
	cin>>n;
	//cout<<msg;
	switch(n)
	{
		case 1:
			Encryption(msg,k);
		break;
		case 2:
			Decryption(msg,k);
		break;
			
	}
	
}
void Encryption(string msg,int k)
{
	int dup;
	string en;	
	ofstream outfile1 ("test2.txt");
	int l = msg.length();
	for(int i=0;i<l;i++)
	{
		int val = int(msg[i]);
		dup = val+k;
		if(dup>122)
		{
			int d = dup-122;
			dup = 96+d	;
		}
		en += char(dup); 
 
	}
	cout<<en;
	outfile1 << en << endl;

}
void Decryption(string msg,int k)
{
	ofstream outfile1 ("test3.txt");
	string de;
	int l = msg.length();
	for(int i=0;i<l;i++)
	{
		int val = int(msg[i]);
		int dup = val-k;
		if(dup<97)
		{
			int d = 96-dup;
			dup = 122-d;
		}
		
		de += char(dup); 
 
	}
	cout<<de;
	outfile1 << de << endl;
}
