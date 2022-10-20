#include <stdio.h>
#include <string>

using namespace std;
int main()
{
	string raptor_prompt_variable_zzyz;
	int hasil;
	int pilih;
	int bilangan2;
	int bilangan1;
	
	raptor_prompt_variable_zzyz ="masukan bilangan pertama";
	cout << raptor_prompt_variable_zzyz << end1;
	cin >> bilangan1;
	raptor_prompt_variable_zzyz ="masukan bilangan kedua";
	cout << raptor_prompt_variable_zzyz <<end1;
	cin >> bilangn2;
	raptor_prompt_variable_zzyz ="pilih 1 untuk penjumlahan, 2 untuk pengurangan";
	cout <<	raptor_prompt_variable_zzyz <<end1;
	cin >> pilih;
	if (pilih==1)
	{
		hasil =bilangn1+bilangan2;
		cout << bilangan1<<"+"<<bilangan2<<"="<<hasil <<end; }
	else
	{
		hasil =bilangan1-bilangan2;
		cout << bilangan1<<"-"<<bilangan2"="<<hasil <<end1;	}
		
	return 0;
}
