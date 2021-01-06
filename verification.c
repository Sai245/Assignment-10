/******************************
* Verification whether output *
* contains "4" 1's in Finite  * 
* state Machine (FSM)  in     *
* output.                     *
*******************************/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool S0=true,S1=false,S2=false,S3=false;
    unsigned char input,output;
    unsigned char input1=0x01,input2=0x00,input3=0x01,input4=0x00,input5=0x01,input6=0x01,input7=0x00,input8=0x01,input9=0x00,input10=0x00,input11=0x01,input12=0x01,input13=0x00,input14=0x01;

	
	if(S0=true)
	{		
	
		if(input1 == 1)
		{
            printf("%x",0);
			S1 = true;
		}
		if(input11 == 1)
		{
			printf("%x",0);
			S1 = true;
		}
	}
	
	if(S1=true)
	{		
	
		if(input12 == 1)
		{
			S1=true;
			printf("%x",0);
		}
		if(input2== 0)
		{
			printf("%x",0);
			S2 = true;
		}
		if(input7 == 0)
		{
			printf("%x",0);
			S2 = true;
		}
		if(input13 == 0)
		{
			printf("%x",0);
			S2 = true;
		}
	}
	
	if(S2=true)
	{		
	
		if(input3== 1)
		{
            printf("%x",1);
			S3=true;
		}
		if(input5 == 1)
		{
			printf("%x",1);
			S3 = true;
		}
		if(input8 == 1)
		{
			printf("%x",1);
			S3 = true;
		}
		if(input14 == 1)
		{
			printf("%x",1);
			S3 = true;
		}
		if(input10 == 0)
		{
			printf("%x",0);
			S0 = true;
		}
	}
	if(S3=true)
	{		
	
		if(input6 == 1)
		{
			S1=true;
			printf("%x",0);
		}
		if(input4 == 0)
		{
			printf("%x",0);
			S2 = true;
		}
		if(input9 ==0)
		{
			printf("%x",0);
			S2 = true;
		}
    }
	
	
}
