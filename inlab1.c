/*
 * inlab1.c
 * 
 * Copyright 2017 SATYARTH <SATYARTH@LAPTOP-O3QCCVJK>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main()
{
	int n,p,d,cc,r1,c=1,c1=0,r;
	scanf("%d\n%d",&n,&p);
	d=n;
	while(n!=0)
	{
		r1=n%10;
		c1++;
		n=n/10;
	}
	n=d;
	cc=(c1-p)+1;
	while(n!=0)
	{
	r=n%10;
	if(c==cc)
	{
		if(r%2==0)
		{
			printf("Even");
			break;
		}	
		else
		{
		printf("Odd");
		break;
	}
	}
	c++;
	n=n/10;
}
	return 0;
}

