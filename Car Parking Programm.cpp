#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	int u_input;
	int amount=0,count=0;
	
	//manu
	while(true)
	{
	
	int Cy=0,B=0,SC=0,BC=0,Bs=0;	
	cout<<"Press 1 for Cycle"<<endl;
	cout<<"Press 2 for Bike"<<endl;
	cout<<"Press 3 for Small Cars under 1000 CC"<<endl;
	cout<<"Press 4 for Big Cars above 1000 CC"<<endl;
	cout<<"Press 5 for Bus"<<endl;
	cout<<"Press 6 to show the record"<<endl;
	cout<<"Press 7 to delete the record"<<endl;
	cin>>u_input;
	
	if(u_input==1)
	{ 
	    if(count<=50)
	    {

		    amount = amount + 10;
		    count = count + 1;
		    Cy=Cy+1;
	    }
	    else
	    {
	    	cout<<"No More Cycles,Parking is Full"<<endl<<endl;
		}
	}
	else if(u_input==2)
	{
		if(count <= 50)
		{
	
		   amount = amount + 20;
		   count = count + 1;
		   B=B+1;
	    }
	    else
	    {
	    	cout<<"No More Bikes ,Parking is Full"<<endl<<endl;
		}
	}
	else if(u_input==3)
	{
	if(count <= 25)
		{
	
		   amount = amount + 100;
		   count = count + 1;
		   SC=SC+1;
	    }
	    else
	    {
	    	cout<<"No More Cars ,Parking is Full"<<endl<<endl;
		}
	}
	else if(u_input==4)
	{
	if(count <= 20)
		{
	
		   amount = amount + 200;
		   count = count + 1;
		   BC=BC+1;
	    }
	    else
	    {
	    	cout<<"No More BigCars ,Parking is Full"<<endl<<endl;
		}
	}
	else if(u_input==5)
	{
		if(count <= 15)
		{
		   amount = amount + 300;
		   count = count + 1;
		   Bs=Bs+1;
	    }
	    else
	    {
	    	cout<<"No More Buses ,Parking is Full"<<endl<<endl;
		}
	}	
	else if(u_input==6)
	{
		cout<<"****************************************************"<<endl;
		cout<<"The total amount = "<<amount<<endl;
		cout<<"The total number of vihicles parked = "<<count<<endl;
		cout<<"The total number of Cycles parked = "<<Cy<<endl;
		cout<<"The total number of Bikes parked = "<<B<<endl;
		cout<<"The total number of Small Cars parked = "<<SC<<endl;
		cout<<"The total number of Big Cars parked = "<<BC<<endl;
		cout<<"The total number of Buses parked = "<<Bs<<endl;
		cout<<"****************************************************"<<endl;
	}
	else if(u_input==7)
	{
		
		amount = 0;
		count = 0;
		cout<<"****************************************************"<<endl;
		cout<<"ROCORD DELETED"<<endl;
		
	}
	else
	{
		cout<<"Invilid number"<<endl;
	}
	getch();
}
}
