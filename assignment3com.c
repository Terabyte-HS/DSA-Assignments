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
	struct node *s1=NULL,*s2=NULL,*q1,*q2,*tmp,*prev,*s3=NULL,*q3;
	int pno,ch1,ch2,n,mch,runner=1,upch,pos,prno;
	char naam[20];
	pf("\n ____________Menu driven program ____________\n");
	while(runner==1)
	{
	pf("\n 1] Enter details \n 2] Display details \n 3] Insert new details \n 4] Delete Details \n 5] Exit \n  Enter the choice : ");
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
			s3=s1;
			q2=s2;
			while(q2!=NULL)
			break;
	case 3: pf("Insertion of data");
			pf("\n Select the class for insertion :\n 1] A  \n 2] B \n Enter choice :");
			sf("%d",&upch);
			if(upch==1)
			{
				pf("\n Selected the division A for insertion :\n");
				pf("\n Enter the position for insertion :");
				sf("%d",&pos);
				q1=s1;
				while(pos>1)
				{
					prev=q1;
					q1=q1->next;
					pos--;
				}
				tmp=(struct node*)malloc(sizeof(struct node));
				pf("\nEnter the PRN : ");
				sf("%d",&pno);
				pf("\nEnter the name :");
				sf("%s",naam);
				strcpy(tmp->name,naam);
				tmp->prn=pno;
				tmp->next=prev->next;
				prev->next=tmp;
				n++;
				pf("Data entered successfully");
			}
			else
			{
				pf("\n Selected the division B for insertion :\n");
				pf("\n Enter the position for insertion :");
				sf("%d",&pos);
				q2=s2;
				while(pos>1)
				{
					prev=q2;
					q2=q2->next;
					pos--;
				}
				tmp=(struct node*)malloc(sizeof(struct node));
				pf("\nEnter the PRN : ");
				sf("%d",&pno);
				pf("\nEnter the name : ");
				sf("%s",naam);
				strcpy(tmp->name,naam);
				tmp->prn=pno;
				tmp->next=prev->next;
				prev->next=tmp;
				n++;
				pf("Data entered successfully");
			}
			break;
	case 4: pf("\nDeletion of details");
			pf("\n Enter the division :\n 1] A \n 2] B \n Enter choice :");
			sf("%d",&ch1);
			if(ch1==1)
			{
			pf("\nEnter the prn number to be deleted :");
			sf("%d",&prno);
			q1=s1;			
			while(q1!=NULL)
			{
				if(q1->prn == prno)
					break;
				else
					prev=q1;
					q1=q1->next;
			}
				prev->next=q1->next;
				free(q1);
				pf("\n Data deleted successfully :)\n");
			}
			else
			{
			pf("\nEnter the prn number to be deleted :");
			sf("%d",&prno);
			q2=s2;			
			while(q2!=NULL)
			{
				if(q2->prn == prno)
					break;
				else
					prev=q1;
					q2=q2->next;
			}
				prev->next=q2->next;
				free(q2);
				pf("\n Data deleted successfully :)");
			}	
			
			break;
	case 5: pf("Thank you see yaa !! :)");
			runner=0;
			break;
	default :pf("Wrong choice selected");
			 break;
		}
	}
}
