/*
 * pattern.c
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


#include <stdio.h>

int main()
{
	char a[5][9];
	for (int i=0;i<4;i++)
	{
		 for(int j=0;j<8;j++)
		 {
			 if(i+j<=12)
			 a[i][j]='*';
			 else
			 a[i][j]=' ';
		 }
		 printf("\n");
	 }
	 for (int i=0;i<4;i++)
	 {
		 for(int j=0;j<8;j++)
		 {
			 printf("%c",a[i][j]);
		 }
		 printf("\n");
	 }
	 return 0;
}

