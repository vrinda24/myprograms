import java.io.*;
import java.util.*;
class vs
{
	public static void main(String ar[])throws Exception
	{
		DataInputStream z=new DataInputStream(System.in );
		String s;
		System.out.println("Enter the paragraph");
		s=z.readLine();
                int p=0;
		StringTokenizer s1=new StringTokenizer(s);
		int l=s1.countTokens();
        String arr[]=new String[l];
        String arr1[]=new String[30];
		String s2,s3;
                int counter=0;
		for(int i=1;i<=l;i++)
		{
			s2=s1.nextToken();
			arr[p++]=s2;		
        }
        int arr1cnt=0,chk=0;
       for(int i=0;i<l;i++)
       { 
         for(int x=0;x<=arr1cnt;x++)
         {
          if(arr1[x].equals(arr[i])){
          chk=1;
          break;
         }
         }
         for(int j=0;j<l;j++)
         {
           if(arr[i].equals(arr[j]))
           counter++;
          }
         if(chk==0)
         System.out.println(arr[i]+":"+counter);
         arr1[arr1cnt++]=arr[i];  
         counter=0;
         chk=0;
     }
}
}

               		
