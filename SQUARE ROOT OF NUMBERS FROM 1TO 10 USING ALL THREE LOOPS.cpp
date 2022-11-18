#include<iostream>
using namespace std;
int main()
{{
	for(int i=1;i<=10;i++)
	if(i==5)
	continue;
	else
	cout<<"The Square Root Of "<<i<<" is "<<i*i<<endl;
}
cout<<"NOW SECOND LOOP TYPE IS"<<endl;
{
	int i=1;
	while(i<=10){
	
	i++;
	if(i==5)
	continue;
	else
	cout<<"The Square Root Of "<<i<<" is "<<i*i<<endl;
	
}
}
cout<<"NOW THIRD LOOP TYPE IS"<<endl;
{
int i=1;
do
{
    i++;
      if(i==5)
      continue;
     cout<<"The Square Root Of "<<i<<" is "<<i*i<<endl;
    
 
   }
    while(i<=10);
}
}




