import java.io.*;
class lineup
{
	int front=0,rear=-1,adult_count=0,child_count=0;
	String que[20];
	public static void main(String ar[])throws Exception
	{
		DataInputStream z=new DataInputStream(System.in);
		int age,ch;
		String s;
		char p;
		do
		{
			System.out.println("Enter your choice 1.Line Up the members 2.Process the member 3.Display the number of adults and children");
			ch=Integer.parseInt(z.readLine());
			switch(ch)
			{
				case 1:
					System.out.println("Is it a family or an individual?");
					s=z.readLine();
					enqueue(s);
					break;
				case 2:
					dequeue();
					break;
				case 3:
					display();
					break;
				}
				System.out.println("Do you want to continue (Y/N)?");
				p=z.readLine();
			}
			while(p=='Y')
	}
	public static void enqueue(String s)throws Exception
	{
		DataInputStream z=new DataInputStream(System.in);
		int n,priority=0,p1;
		String name;
		if(s.equalsIgnoreCase("Family"))
		{
			System.out.println("Enter the number of members in the family ");
		    n=Integer.parseInt(z.readLine());
		    if((n+rear)<=19)
		    {
				if(front>rear)
				{
					System.out.println("Enter the name and age of the members of the family ");
					for(int i=1;i<=n;i++)
					{
						name=z.readLine();
						rear++;
						que[rear]=name;
						age=Integer.parseInt(z.readLine());
						if(age>12)
						adult_count++;
						else
						child_count++;
					}
				}
				else
				{
					System.out.println("Enter the priority of the family ");
					p1=z.readLine();
					if(p1>priority)
					{
						priority=p1;
						int j=rear;
						rear=j+n;
						while(j>front)
						{
							que[j+n]=que[j];
							j--;
						}
						front=j;
						System.out.println("Enter the name and age of the members of the family");
						for(int i=j;i<=(j+n)-1;i++)
						que[i]=z.readLine();
					}
				}
			}
			else
				System.out.println("Cannot accept more members");
			}
			if(s.equalsIgnoreCase("Individual"))
			{
				rear++;
				System.out.println("Enter the name and age of the individual");
				que[rear]=z.readLine();
				age=Integer.parseInt(z.readLine());
				if(age>12)
					adult_count++;
				else
					child_count++;
				}
			}
			public static void dequeue()
			{
				if(front>rear)
					System.out.println("Empty Queue");
				else
					System.out.println(que[front++]+" "+"is processed");
			}
			public static void display()
			{
				for(int i=front;i<=rear;i++)
				{
					if(que[i].isalpha())
					System.out.println(que[i]);
				}
			}
