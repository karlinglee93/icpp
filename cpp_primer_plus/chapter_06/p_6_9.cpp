// 看的答案

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
struct person
{
	string name;
	double money;
};

int main()
{
	int n_person = 0;

	ifstream infile;
	infile.open("p_6_9_test.txt");

	infile >> n_person;

	infile.get();                   	// 同cin.get() 一样重要
	
	cout << "the number of person: " << n_person << endl;
	person *p = new person[n_person];

	for(int i=0; i<n_person; i++)
	{
		getline(infile, p[i].name);	// 读取一整行
		// infile >> p[i].name;		// 读取一行的第一个str, 空白以后不读
		infile >> p[i].money;
		
		infile.get();			// 同cin.get() 一样重要
	}

	int len_1 = 0;
	cout << "Grand Patrons" << endl;
	for(int i=0; i<n_person; i++)
	{
		if(p[i].money > 10000)
		{
			cout << p[i].name << ", " << p[i].money << endl;
			len_1 ++;
		}
	}
	if(len_1 == 0)
		cout << "none" << endl;

	int len_2 = 0;
	cout << "Patrons" << endl;
	for(int i=0; i<n_person; i++)
	{
		if(p[i].money <= 10000)
	        {
	              cout << p[i].name << endl;
	              len_2 ++;	   
 	        }
	}
	if(len_2 == 0)
        	cout << "none" << endl;
		        
	delete [] p;
	infile.close();

	return 0;
}
