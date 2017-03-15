#include <iostream>
using namespace std;

int main()
{
	int i=0,n=0;
	cin>>n;
	while(i<n)
	{
		if (n==1)
		{
			cout<<n<<" "<<endl;
  	        return 0;
		}
	    else if (n%2==0)
	    {
	    	n=n/2;
	        cout<<n<<" ";
	        continue;
	    }
	    else
	    {
	    	n=3*n+1;
            cout<<n<<" ";
            continue;
	    }  
	}	
}
