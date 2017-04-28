#include <iostream> // sort of a major requirement...
using namespace std; // because I'm lazy

int main()
{
	char user = 'o';
	char wall = 'x';
	char end = 'E';

	char maze[10][10];

	int outerCount, innerCount;

	// initialize the worlds easiest maze
	for(outerCount = 0; outerCount < 10; outerCount++)
	{
		for(innerCount = 0; innerCount < 10; innerCount++)
		{
			if(outerCount == 0 || outerCount == 9)
				maze[outerCount][innerCount] = wall;
			else if(innerCount == 0 || innerCount == 9)
				maze[outerCount][innerCount] = wall;
			else
				maze[outerCount][innerCount] = ' ';
		}
	}

	// print it, just to be sure, will move to a function eventually
	for(outerCount = 0; outerCount < 10; outerCount++)
	{
		for(innerCount = 0; innerCount < 10; innerCount++)
		{
			cout << maze[outerCount][innerCount];
		}
		cout << endl;
	}

	return 0; // lets all hope we can get here
}
