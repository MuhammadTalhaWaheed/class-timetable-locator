#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<unistd.h>
struct building
{
	char CS[100];
	char EE[100];
	char MP[100];
	char CYS[100];	
};
struct floor
{
	char f1[100], f2[100],f3[100],f4[100];
	struct building b;
};
void CS(int y);
void SE(int y);
void AI(int y);
void CYS(int y);
void CSA(int y);
void SEA(int y);
void AIA(int y);
void CYSA(int y);

int main()
{
	char c,r,again,a[50],u,P[10];
	int y,x,i,j,l,o,p;
	struct floor f[100]={"Ground Floor","First Floor","Second Floor","Basement","Computer Science Building","Electrical Engineering Building ","Multipurpose Building","Cyber Security Building"};
	printf("\t\t  %c %c %c %c WELCOME TO SCHEDULE PRO %c %c %c %c  \n",178,178,178,178,178,178,178,178);
	for(i=100;i>97;i--)
	{
		for(j=1;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("Enter the user type:\n\t1. A for ADMIN\n     \t2. S for STUDENT\n\t");
	scanf(" %c",&u);
	if(u=='A'|| u=='a')
	{
		printf("Enter the password (Hint: University name) ");
		scanf("%s",&P);
		if((P[0]=='F'&& P[1]=='A' && P[2]=='S' && P[3]=='T')||(P[0]=='f' && P[1]=='a' && P[2]=='s' && P[3]=='t')) 
		{
		printf("Enter the year\n\t");
		scanf("%d",&y);
		printf("Select the department: \n \t1. Computer Science\n \t2. Software Engineering\n \t3. Artificial Intelligence\n \t4. Cyber Security \n\t");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				CSA(y);
				break;
			case 2:
				SE(y);
				break;
			case 3:
				AI(y);
				break;
			case 4:
				CYS(y);
				break;
			default:
				printf("\nEnter valid choice.");				
		}
		}
		else printf(" \t\t\t\tIncorrect Password");
	}
	else if(u=='s'|| u=='S')
	{
	printf("Enter the options:\n\t T for Timetable \n\t D for Directions\t ");
	scanf(" %c",&c);
	system("COLOR 06");
	if(c=='T'||c=='t')
	{
		printf("Enter the year\t");
		scanf("%d",&y);
		printf("\nSelect the department: \n \t1. Computer Science\n \t2. Software Engineering\n \t3. Artificial Intelligence\n \t4. Cyber Security \t");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				CS(y);
				break;
			case 2:
				SE(y);
				break;
			case 3:
				AI(y);
				break;
			case 4:
				CYS(y);
				break;
			default:
				printf("\nEnter valid choice.");				
		}
	}
	else if(c=='D'||c=='d')
	{
		printf("Press \n L for Lab \n R for classroom\n O for Offices\n P for Different Places(Grounds,library,cafeteria)");
		scanf(" %c",&r);
		switch(r)
		{
			case 'L':
			case 'l':
				{
					printf("Enter Lab number");	
					scanf("%d",&l);
					if(l==1)
					{
						printf("The lab is in %s on %s",f[0].b.CS,f[0].f2);
					}
					if(l==3)
					{
						printf("The lab is in %s on %s",f[0].b.CS,f[0].f2);
					}
					if(l==4)
					{
						printf("The lab is in %s on %s",f[0].b.CS,f[0].f2);
					}
					if(l==11)
					{
						printf("The lab is in %s on %s",f[0].b.CS,f[0].f4);
					}
					if(l==12)
					{
						printf("The lab is in %s on %s",f[0].b.CYS,f[0].f2);
					}
					if(l==6)
					{
						printf("The lab is in %s on %s",f[0].b.EE,f[0].f4);
					}
					if(l==9)
					{
						printf("The lab is in %s on %s",f[0].b.EE,f[0].f3);
					}
					if(l==10)
					{
						printf("The lab is in %s on %s",f[0].b.EE,f[0].f3);
					}
					break;
				}
			case 'R':
			case 'r':
				{
				printf("Enter the Room Number");
		scanf("%s",&a);
		if(a[0]=='E'&& a[1]=='1')
		{
			printf("The room is in %s on %s",f[0].b.CS,f[0].f2);
		}
		else if(a[0]=='E'&& a[1]=='2')
		{
			printf("The room is in %s on %s",f[0].b.CS,f[0].f2);
		}
		else if(a[0]=='E'&& a[1]=='3')
		{
			printf("The room is in %s on %s",f[0].b.CS,f[0].f2);
		}
		else if(a[0]=='E'&& a[1]=='4')
		{
			printf("The room is in %s on %s",f[0].b.CS,f[0].f2);
		}
		else if(a[0]=='E'&& a[1]=='5')
		{
			printf("The room is in %s on %s",f[0].b.CS,f[0].f2);
		}
		else if(a[0]=='E'&& a[1]=='6')
		{
			printf("The room is in %s on %s",f[0].b.CS,f[0].f2);
		}
		else if(a[0]=='S'&& a[1]=='2')
		{
			printf("The room is in %s on %s",f[0].b.CS,f[0].f1);
		}
		else if(a[0]=='R'&& a[1]=='1' &&a[2]=='2')
		{
			printf("The room is in %s on %s",f[0].b.CS,f[0].f1);
		}
		else if(a[0]=='R'&& a[1]=='1' &&a[2]=='0'&& a[3]=='9')
		{
			printf("The room is in %s on %s",f[0].b.CS,f[0].f2);
		}
		else if(a[0]=='A'&& a[1]=='1')
		{
			printf("The room is in %s on %s",f[0].b.EE,f[0].f4);
		}
		else if(a[0]=='A'&& a[1]=='2')
		{
			printf("The room is in %s on %s",f[0].b.EE,f[0].f4);
		}
		else if(a[0]=='A'&& a[1]=='3')
		{
			printf("The room is in %s on %s",f[0].b.EE,f[0].f4);
		}
		else if(a[0]=='A'&& a[1]=='4')
		{
			printf("The room is in %s on %s",f[0].b.EE,f[0].f4);
		}
		else if(a[0]=='A'&& a[1]=='5')
		{
			printf("The room is in %s on %s",f[0].b.EE,f[0].f4);
		}
		else if(a[0]=='A'&& a[1]=='6')
		{
			printf("The room is in %s on %s",f[0].b.EE,f[0].f4);
		}
		else if(a[0]=='A'&& a[1]=='7')
		{
			printf("The room is in %s on %s",f[0].b.EE,f[0].f4);
		}
		else if(a[0]=='A'&& a[1]=='8')
		{
			printf("The room is in %s on %s",f[0].b.EE,f[0].f4);
		}
		else if(a[0]=='B'&& a[1]=='9')
		{
			printf("The room is in %s on %s",f[0].b.EE,f[0].f2);
		}
		else if(a[0]=='B'&& a[1]=='1'&& a[2]=='0')
		{
			printf("The room is in %s on %s",f[0].b.EE,f[0].f2);
		}
		else if(a[0]=='B'&& a[1]=='1'&& a[2]=='1')
		{
			printf("The room is in %s on %s",f[0].b.EE,f[0].f2);
		}
		else if(a[0]=='B'&& a[1]=='1'&& a[2]=='2')
		{
			printf("The room is in %s on %s",f[0].b.EE,f[0].f2);
		}
		else if(a[0]=='C'&& a[1]=='1'&& a[2]=='7')
		{
			printf("The room is in %s on %s",f[0].b.EE,f[0].f3);
		}
		else if(a[0]=='C'&& a[1]=='1'&& a[2]=='8')
		{
			printf("The room is in %s on %s",f[0].b.EE,f[0].f3);
		}
		else if(a[0]=='C'&& a[1]=='1'&& a[2]=='9')
		{
			printf("The room is in %s on %s",f[0].b.EE,f[0].f3);
		}
		else if(a[0]=='C'&& a[1]=='2'&& a[2]=='0')
		{
			printf("The room is in %s on %s",f[0].b.EE,f[0].f3);
		}
		else if(a[0]=='C'&& a[1]=='2'&& a[2]=='1')
		{
			printf("The room is in %s on %s",f[0].b.EE,f[0].f3);
		}
		else if(a[0]=='C'&& a[1]=='2'&& a[2]=='2')
		{
			printf("The room is in %s on %s",f[0].b.EE,f[0].f3);
		}
	}
		break;
			case 'o':
			case 'O':
				{
					printf("Press:\n 1. Academics Office\n 2. Accounts Office\n 3. Transport Office\n 4. Student Facilitation Centre");
					scanf("%d",&o);
					switch(o)
					{
						case 1:
							printf("In the CS building Basement\n");
							break;
						case 2:
							printf("In the CS building Basement\n");
							break;
						case 3:
							printf("In the CS building Basement\n");
							break;
						case 4:
							printf("In the CS building Ground Floor\n");
							break;			
							
					}
					break;
				}
			case 'p':
			case 'P':
				{
					printf("Press: \n 1. Library\n 2. Cafteria\n 3. Sports Grounds\n 4. Boys Common room \n 5. Girls Common Room");
					scanf("%d",&p);
					switch(p)
					{
						case 1:
							printf("The Library is in %s on %s",f[0].b.MP,f[0].f4);
							break;
						case 2:
							printf("The cafeteria is in %s on %s",f[0].b.MP,f[0].f2);
							break;
						case 3:
							printf("The Sports Ground are near %s and %s",f[0].b.CS,f[0].b.MP);
							break;
						case 4:
							printf("The BCR is in %s on %s",f[0].b.EE,f[0].f4);
							break;
						case 5:
							printf("The GCR is in %s on %s",f[0].b.CS,f[0].f2);
							break;
						default:
							printf("Choose valid Choice");
							break;			
							
					}
				}
				
		}
		} else printf("Enter valid choice");
	}else printf("Enter valid character");
	

	
	printf("\n\nDo you want to again run the SCHEDULE PRO?\n Press Y for Yes\n Press N for No\n\n");
	scanf(" %c",&again);
	if (again=='Y'|| again=='y')
	{
		main();
	}
	else
	{
		printf("\t\t\t\t\t\t**Goodbye!**"); 
	return 0;
	}
	
}
void CS(int y)
{system("COLOR 03");
	char sec;
	int i,j;
	printf("Enter your section alphabet");
	scanf(" %c",&sec);
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
		printf("  		     *");	
		}
		printf("\n");
		sleep(1);
	}
	printf("  		  *******\n");
	printf("   		   ***** \n");
	printf("    	            *** \n");
	printf("     	             * ");

	if(y==2018)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 7A 2018*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 7A 2018.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='B')
		{
			printf("\t\t\t*Section 7B 2018*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 7B 2018.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='C')
		{
			printf("\t\t\t*Section 7C 2018*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 7C 2018.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='D')
		{
			printf("\t\t\t*Section 7D 2018*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 7D 2018.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='E')
		{
			printf("\t\t\t*Section 7E 2018*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 7E 2018.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='F')
		{
			printf("\t\t\t*Section 7F 2018*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 7F 2018.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='G')
		{
			printf("\t\t\t*Section 7G 2018*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 7G 2018.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='H')
		{
			printf("\t\t\t*Section 7H 2018*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 7H 2018.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
	}
	if(y==2019)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 5A 2019*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 5A 2019.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='B')
		{
			printf("\t\t\t*Section 5B 2019*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 5B 2019.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='C')
		{
			printf("\t\t\t*Section 5C 2019*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 5C 2019.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='D')
		{
			printf("\t\t\t*Section 5D 2019*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 5D 2019.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='E')
		{
			printf("\t\t\t*Section 5E 2019*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 5E 2019.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='F')
		{
			printf("\t\t\t*Section 5F 2019*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 5F 2019.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='G')
		{
			printf("\t\t\t*Section 5G 2019*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 5G 2019.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='H')
		{
			printf("\t\t\t*Section 5H 2019*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 5H 2019.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='J')
		{
			printf("\t\t\t*Section 5J 2019*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 5J 2019.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}	
	}
		if(y==2020)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 3A 2020*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 3A 2020.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='B')
		{
			printf("\t\t\t*Section 3B 2020*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 3B 2020.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='C')
		{
			printf("\t\t\t*Section 3C 2020*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 3C 2020.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='D')
		{
			printf("\t\t\t*Section 3D 2020*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 3D 2020.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='E')
		{
			printf("\t\t\t*Section 3E 2020*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 3E 2020.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='F')
		{
			printf("\t\t\t*Section 3F 2020*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 3F 2020.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
	}
	if(y==2021)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 1A 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 1A 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='B')
		{
			printf("\t\t\t*Section 1B 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 1B 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='C')
		{
			printf("\t\t\t*Section 1C 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 1C 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='D')
		{
			printf("\t\t\t*Section 1D 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 1D 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='E')
		{
			printf("\t\t\t*Section 1E 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 1E 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='F')
		{
			printf("\t\t\t*Section 1F 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 1F 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='G')
		{
			printf("\t\t\t*Section 1G 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 1G 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='H')
		{
			printf("\t\t\t*Section 1H 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 1H 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		
		else if(sec=='J')
		{
			printf("\t\t\t*Section 1J 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 1J 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}	
		else if(sec=='K')
		{
			printf("\t\t\t*Section 1K 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 1K 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='L')
		{
			printf("\t\t\t*Section 1L 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 1L 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='M')
		{
			printf("\t\t\t*Section 1M 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CS 1M 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
	}
}
void SE(int y)
{
	system("COLOR 02");
	char sec;
	int i,j;
	printf("Enter your section alphabet");
	scanf(" %c",&sec);
	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
		printf("  		     *");	
		}
		printf("\n");
		sleep(1);
	}
	printf("  		  *******\n");
	printf("   		   ***** \n");
	printf("    	            *** \n");
	printf("     	             * ");
		if(y==2019)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 5A 2019*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("SE 5A 2019.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='B')
		{
			printf("\t\t\t*Section 5B 2019*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("SE 5B 2019.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
	}
	if(y==2020)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 3A 2020*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("SE 3A 2020.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='B')
		{
			printf("\t\t\t*Section 3B 2020*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("SE 3B 2020.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
	}
	if(y==2021)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 1A 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("SE 1A 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='B')
		{
			printf("\t\t\t*Section 1B 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("SE 1B 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
	}
}
void AI(int y)
{
	char sec;
	int i,j;
	system("COLOR 05");
	printf("Enter your section alphabet");
	scanf(" %c",&sec);
	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
		printf("  		     *");	
		}
		printf("\n");
		sleep(1);
	}
	printf("  		  *******\n");
	printf("   		   ***** \n");
	printf("    	            *** \n");
	printf("     	             * ");
		if(y==2020)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 3A 2020*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("AI 3A 2020.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
	}
	if (y==2021)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 1A 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("AI 1A 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='B')
		{
			printf("\t\t\t*Section 1B 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("AI 1B 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='C')
		{
			printf("\t\t\t*Section 1C 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("AI 1C 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
	}
}
void CYS(int y)
{
	char sec;
	int i,j;
	system("COLOR 04");
	printf("Enter your section alphabet");
	scanf(" %c",&sec);
	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
		printf("  		     *");	
		}
		printf("\n");
		sleep(1);
	}
	printf("  		  *******\n");
	printf("   		   ***** \n");
	printf("    	            *** \n");
	printf("     	             * ");
		if(y==2020)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 3A 2020*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CYS 3A 2020.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
	}
	if (y==2021)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 1A 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CYS 1A 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
		else if(sec=='B')
		{
			printf("\t\t\t*Section 1B 2021*\n\n");
			char c;
			FILE *fptr;
			fptr=fopen("CYS 1B 2021.txt","r");
			while(1)
			{
			c=fgetc(fptr);
			if(c==EOF)
			break;
			printf("%c",c);
			}
			fclose(fptr);
		}
	
	}

}
void CSA(int y)
{
	char sec;
	int i,j;
	printf("Enter your section alphabet");
	scanf(" %c",&sec);
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
		printf("  		     *");	
		}
		printf("\n");
		sleep(1);
	}
	printf("  		  *******\n");
	printf("   		   ***** \n");
	printf("    	            *** \n");
	printf("     	             * ");

	if(y==2018)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 7A 2018*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 7A 2018.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 7A 2018.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='B')
		{
			printf("\t\t\t*Section 7B 2018*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 7B 2018.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 7B 2018.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='C')
		{
			printf("\t\t\t*Section 7C 2018*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 7C 2018.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 7C 2018.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='D')
		{
			printf("\t\t\t*Section 7D 2018*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 7D 2018.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 7D 2018.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		
		else if(sec=='E')
		{
			printf("\t\t\t*Section 7E 2018*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 7E 2018.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 7E 2018.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		
		else if(sec=='F')
		{
			printf("\t\t\t*Section 7F 2018*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 7F 2018.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 7F 2018.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='G')
		{
			printf("\t\t\t*Section 7G 2018*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 7G 2018.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 7G 2018.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='H')
		{
			printf("\t\t\t*Section 7H 2018*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 7H 2018.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 7H 2018.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
	}

	if(y==2019)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 5A 2019*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 5A 2019.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 5A 2019.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='B')
		{
				printf("\t\t\t*Section 5B 2019*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 5B 2019.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 5B 2019.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='C')
		{
				printf("\t\t\t*Section 5C 2019*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 5C 2019.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 5C 2019.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='D')
		{
				printf("\t\t\t*Section 5D 2019*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 5D 2019.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 5D 2019.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='E')
		{
				printf("\t\t\t*Section 5E 2019*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 5E 2019.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 5E 2019.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='F')
		{
				printf("\t\t\t*Section 5F 2019*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 5F 2019.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 5F 2019.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='G')
		{
			printf("\t\t\t*Section 5G 2019*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 5G 2019.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 5G 2019.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='H')
		{
				printf("\t\t\t*Section 5H 2019*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 5H 2019.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 5H 2019.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='J')
		{
				printf("\t\t\t*Section 5J 2019*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 5J 2019.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 5J 2019.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
	}
		if(y==2020)
	{
		if(sec=='A')
		{
				printf("\t\t\t*Section 3A 2020*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 3A 2020.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 3A 2020.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='B')
		{
			printf("\t\t\t*Section 3B 2020*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 3B 2020.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 3B 2020.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='C')
		{
			printf("\t\t\t*Section 3C 2020*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 3C 2020.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 3C 2020.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='D')
		{
		printf("\t\t\t*Section 3D 2020*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 3D 2020.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 3D 2020.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='E')
		{
			printf("\t\t\t*Section 3E 2020*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 3E 2020.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 3E 2020.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		
		else if(sec=='F')
		{
			printf("\t\t\t*Section 3F 2020*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 3F 2020.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 3F 2020.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
	}
	if(y==2021)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 1A 2021*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 1A 2021.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 1A 2021.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='B')
		{
			printf("\t\t\t*Section 1B 2021*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 1B 2021.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 1B 2021.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='C')
		{
			printf("\t\t\t*Section 1C 2021*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 1C 2021.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 1C 2021.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='D')
		{
		printf("\t\t\t*Section 1D 2021*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 1D 2021.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 1D 2021.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='E')
		{
			printf("\t\t\t*Section 1E 2021*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 1E 2021.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 1E 2021.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		}
		else if(sec=='F')
		{
			printf("\t\t\t*Section 1F 2021*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 1F 2021.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 1F 2021.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
	
		else if(sec=='G')
		{
		printf("\t\t\t*Section 1G 2021*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 1G 2021.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 1G 2021.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
	
		else if(sec=='H')
		{
			printf("\t\t\t*Section 1H 2021*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 1H 2021.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 1H 2021.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
	
		else if(sec=='J')
		{
			printf("\t\t\t*Section 1J 2021*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 1J 2021.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 1J 2021.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
	
		else if(sec=='K')
		{
			printf("\t\t\t*Section 1K 2021*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 1K 2021.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 1K 2021.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
	
		else if(sec=='L')
		{
			printf("\t\t\t*Section 1L 2021*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 1L 2021.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 1L 2021.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
	
		else if(sec=='M')
		{
			printf("\t\t\t*Section 1M 2021*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CS 1M 2021.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CS 1M 2021.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
	}
	void SEA(int y)
{
	char sec;
	int i,j;
	printf("Enter your section alphabet");
	scanf(" %c",&sec);
	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
		printf("  		     *");	
		}
		printf("\n");
		sleep(1);
	}
	printf("  		  *******\n");
	printf("   		   ***** \n");
	printf("    	            *** \n");
	printf("     	             * ");
		if(y==2019)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 5A 2019*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("SE 5A 2019.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("SE 5A 2019.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		
		else if(sec=='B')
		{
			printf("\t\t\t*Section 5B 2019*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("SE 5B 2019.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("SE 5B 2019.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		}
	if(y==2020)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 3A 2020*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("SE 3A 2020.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("SE 3A 2020.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='B')
		{
			printf("\t\t\t*Section 3B 2020*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("SE 3B 2020.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("SE 3B 2020.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
	}
	if(y==2021)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 1A 2021*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("SE 1A 2021.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("SE 1A 2021.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='B')
		{
			printf("\t\t\t*Section 1B 2021*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("SE 1B 2020.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("SE 1B 2020.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
	}
}
void AIA(int y)
{
	char sec;
	int i,j;
	printf("Enter your section alphabet");
	scanf(" %c",&sec);
	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
		printf("  		     *");	
		}
		printf("\n");
		sleep(1);
	}
	printf("  		  *******\n");
	printf("   		   ***** \n");
	printf("    	            *** \n");
	printf("     	             * ");
		if(y==2020)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 3A 2020*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("AI 3A 2020.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("AI 3A 2020.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
	}
	if (y==2021)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 1A 2021*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("AI 1A 2021.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("AI 1A 2021.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='B')
		{
			printf("\t\t\t*Section 1B 2021*\n\n");
		FILE* fp;
    		char ch,a[10];
    		fp = fopen("AI 1B 2021.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("AI 1B 2021.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='C')
		{
			printf("\t\t\t*Section 1C 2021*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("AI 1C 2021.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("AI 1C 2021.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
	}
}
void CYSA(int y)
{
	char sec;
	int i,j;
	printf("Enter your section alphabet");
	scanf(" %c",&sec);
	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
		printf("  		     *");	
		}
		printf("\n");
		sleep(1);
	}
	printf("  		  *******\n");
	printf("   		   ***** \n");
	printf("    	            *** \n");
	printf("     	             * ");
		if(y==2020)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 3A 2020*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CYS 3A 2020.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CYS 3A 2020.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
	}
	if (y==2021)
	{
		if(sec=='A')
		{
			printf("\t\t\t*Section 1A 2021*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CYS 1A 2021.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CYS 1A 2021.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
		else if(sec=='B')
		{
			printf("\t\t\t*Section 1B 2021*\n\n");
			FILE* fp;
    		char ch,a[10];
    		fp = fopen("CYS 1B 2021.txt", "r+");
   			while (1) {
        	ch = fgetc(fp); 
        	if (ch == EOF)
            break;
        	printf("%c", ch);
   			 }
   			printf("Enter the addition: ");
  			scanf("%s",&a);  	
    		fprintf(fp,"%s",a);
    		fclose(fp);
    		fp = fopen("CYS 1B 2021.txt", "r+"); 
    		printf("\n\t\t\t\tThe updated Timetable is: \n\n");
			while (1) {
        		ch = fgetc(fp); 
        		if (ch == EOF) 
            	break;
       				 printf("%c", ch);
    		}
    		fclose(fp);
			}
	
	}

}

	



