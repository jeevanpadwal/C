#include"header2.h"

///////////////////////////////////////////////////////
//
//  Function name:  Addition
//  Description:    use to perform addition of 2 number
//  Input:          Integer,Integer
//  Output:         Integer
//  Date:           12/04/2022
//  Author:         Jeevan Balasaheb Padwal.
//                                  
////////////////////////////////////////////////////////

int Addition(int ivalue1,int ivalue2 )
{
	int ians=0;

    if(ivalue1<0)
    {
        ivalue1= -ivalue1;

    }

    if (ivalue2<0)
    {
        ivalue2= -ivalue2;
    }
	ians=ivalue1+ivalue2;
	return ians;
}
 