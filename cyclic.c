/*
 * cyclic.c
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
	int n,m,address;
	scanf("%d",&n);
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
	scanf("%d",&arr1[i]);
	scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
		if( i+m>=n)
		address=(i+m)-n;
		else
		address=i+m;
	 arr2[address]=arr1[i];
 }
    for(int i=0;i<n;i++)
    {
		printf("%d\n",arr2[i]);
	}
    return 0; 		
}

