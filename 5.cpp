
#include <iostream>
using namespace std;
int a;
int
loop(int input){
  for (int b = 1; b <= input;b++)
    {
      if (b == 1 or b == input)
	{
	  for (int c = 1; c <= input; c++)
	    {
	      cout << " *";
	    }
	}
      else
	{
	  for (int c = 1; c <= input; c++)
	    {
	      if (c == 1 or c == input)
		{
		  cout << " *";
		}
	      else
		{
		  cout << "  ";
		}
	    }
	}
      cout << endl;
    }
}

int
main ()
{
    cout<<"Masukan panjang persegi ";
    cin>>a;
    loop(a);
}
