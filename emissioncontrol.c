/*
 * emissioncontrol.c
 * 
 * Copyright 2016 SATYARTH <SATYARTH@LAPTOP-O3QCCVJK>
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
//emission control

#include <stdio.h>

int main(void)
{
	int code,od;
	float em;
	scanf("%d\n%f\n%d",&code,&em,&od);
	if (code==1)
	{
		if(od<=50000 && em<=3.4)
		printf("Emission does not exceed the permitted level of 3.4 g/mile\n");
		else if(od<=50000 && em>3.4)
		printf("Emission exceeds the permitted level of 3.4 g/mile\n");
		else if(od>=50000 && em<1)
		printf("Emission does not exceed the permitted level of 1 g/mile\n");
		else
		printf("Emission exceeds the permitted level of 1 g/mile\n");
	}
	else if(code==2)
	{
		if(od<=50000 && em<=0.31)
		printf("Emission does not exceed the permitted level of 0.31 g/mile\n");
		else if(od<=50000 && em>0.31)
		printf("Emission exceeds the permitted level of 0.31 g/mile\n");
		else if(od>=50000 && em<=0.39)
		printf("Emission does not exceed the permitted level of 0.39 g/mile\n");
		else
		printf("Emission exceeds the permitted level of 0.39 g/mile\n");
	}
	else if(code==3)
	{
		if(od<=50000 && em<=0.4)
		printf("Emission does not exceed the permitted level of 0.4 g/mile\n");
		else if(od<=50000 && em>0.4)
		printf("Emission exceeds the permitted level of 0.4 g/mile\n");
		else if(od>=50000 && em<=1.0)
		printf("Emission does not exceed the permitted level of 1 g/mile\n");
		else
		printf("Emission exceeds the permitted level of 1 g/mile\n");
	}
	else
	{
		if(od<=50000 && em<=0.25)
		printf("Emission does not exceed the permitted level of 0.25 g/mile\n");
		else if(od<=50000 && em>0.25)
		printf("Emission exceeds the permitted level of 0.25 g/mile\n");
		else if(od>=50000 && em<=0.31)
		printf("Emission does not exceed the permitted level of 0.31 g/mile\n");
		else
		printf("Emission exceeds the permitted level of 0.31 g/mile\n");
	}
}

