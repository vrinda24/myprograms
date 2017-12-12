/*
 * secsm.c
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
#include <stdlib.h>
int main()
{
 int n,arr[100],swap;
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 scanf("%d",&arr[i]);
 for(int i=0;i<(n-1);i++)
 {
	 for(int j=0;j<n-i-1;j++)
	 {
		 if(arr[j]>arr[j+1])
		 {
			 swap=arr[j];
			 arr[j]=arr[j+1];
			 arr[j+1]=swap;
		}
	}
}
printf("%d",arr[1]);
return 0;
}

 

