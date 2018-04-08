#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	char ch;

	cout << "input something ('@' means end): ";
	while(cin.get(ch) && ch != '@')
	{
		if(! isdigit(ch))
		{
			if(isupper(ch))
				ch = tolower(ch);
			else if(islower(ch))
				ch = toupper(ch);

			cout << ch;
		}
	}
	cout << endl;
	cout << "done" << endl;

	return 0;
}
