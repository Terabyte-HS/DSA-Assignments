#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define pf printf
#define sf scanf
struct node{
	int prn;
	char name[20];
	struct node *next;
};
void main()
{	
	struct node *s1=NULL,*s2=NULL,*q1,*q2,*tmp;
	int pno,ch1,ch2,n,mch,runner=1,upch;
	char naam[20];
	pf("\n ____________Menu driven program ____________\n");
	while(runner==1)
	{
	pf("\n 1] Enter details \n 2] Display details \n 3] Update details \n 4] Exit \n  Enter the choice : ");
	sf("%d",&mch);
	switch(mch)
	{
	case 1:	
			pf("\n Enter the division:\n 1]A \n 2]B \n Enter choice :");
			sf("%d",&ch1);
			pf("\n Enter the number of students enter:");
			sf("%d",&n);
			while(n>0)
			{
				tmp=(struct node*)malloc(sizeof(struct node));
				if(tmp==NULL)
				{
					pf("\n mem alloc failed");
				}
				pf("\n Enter the prn number(5 digits): ");
				sf("%d",&pno);
				pf("\n Enter the Name :");
				sf("%s",&naam);
				tmp->prn=pno;
				strcpy(tmp->name,naam);
				tmp->next=NULL;
				
				if(ch1==1)
				{
					if(s1==NULL)
						s1=tmp;
					else{
						q1=s1;
						while(q1->next!=NULL)
						{
							q1=q1->next;
						}
						q1->next=tmp;
					}
					pf("\n Data Added :)\n");
						
				}
				else
				{
					if(s2==NULL)
						s2=tmp;
					else{
						q2=s2;
						while(q2->next!=NULL)
						{
							q2=q2->next;
						}
						q2->next=tmp;
					}
					pf("\n Data Added :)\n");
				}
				n--;
			}
			break;
		// displaying the students of the div A and B
	case 2: 
			pf("\n Which division to be displayed :\n 1] A \n 2] B \n enter choice : ");
			sf("%d",&ch2);
				if(ch2 == 1)
				{
				pf("\n Division A details : \n");
				q1=s1;
				while(q1!=NULL)
				{
					pf("-> [Name] : %s ||| [PRN] : %d  \n",q1->name,q1->prn);
					q1=q1->next;
				}
			}
			else
			{
				pf("\n Division B details :\n");
				q2=s2;
				while(q2!=NULL)
				{
						pf("-> [Name] : %s ||| [PRN] : %d  \n",q2->name,q2->prn);
						q2=q2->next;
				}
			}
			break;
	case 3: pf("Updation of data");
			pf("\n Select the class for updation :\n 1] A  \n 2] B \n Enter choice :");
			sf("%d",&upch);
			if(upch==1)
			{
				pf("\n Selected the division A for updation :\n");
				pf("\n Enter the position for updation :");
				sf("%d",&pos);
				while(pos>0)
				{
					q1=s1;
					
				}
			}
			break;
	case 4: pf("Thank you see yaa !! :)");
			runner=0;
			break;
	default :pf("Wrong choice selected");
			 break;
		}
	}
}
