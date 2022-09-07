#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>


bool choice = true;

float total_amount;
struct new_account
{
	char name[50];
	char dob[50];
	char mob[11];
	char add[80];
	char citi_num[50];
	char pass[15];
	float amount;
	char time[50];
	char deposit_t[50];
	char with_t[50];
	char tran_t[50];
	char rec_t[50];
	float deposit_amount;
	float withdrawn_amount;
	float transact_amount;
	float recieved_amount;
	
}ad,s1,s2,usr;


void wel_bank();
void del_acc();
void customer_list();
void acc_info();
void atm();



//function for creating new account
void new_acc()
{
    struct new_account ad; 
    
    time_t n;
	time(&n);
	strcpy(ad.time,ctime(&n));
	
    FILE *f;
    ad.amount=0;
    printf("\n\n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB ACCOUNT OPENING FORM (AOF)");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	
    printf("\n\n\n     %c Enter your name : ",248);
	scanf("%s",&ad.name);
	printf("\n\n     %c Enter your Mobile number : ",248);
	scanf("%s",&ad.mob);
	printf("\n\n     %c Enter your date of birth: ",248);
	scanf("%s",&ad.dob);
	printf("\n\n     %c Enter your Home address: ",248);
	scanf("%s",&ad.add);
	printf("\n\n     %c Enter your citizenship number: ",248);
	scanf("%s",&ad.citi_num);
	printf("\n\n     %c Enter your password: ",248);
	scanf("%s",&ad.pass);
	time_t now;
	time(&now);
	
	
	
	
	

	char *copy2=ad.name;
	char *copy3=ad.pass;
	char copy1[50];
	char *copy = strcpy(copy1,copy2);
	char *nm=strcat(copy,copy3);
	char directory[50]="C:/Users/admin/Documents/";
	char *nm_2=strcat(directory,nm);
	char *user_data;
	user_data=strcat(nm_2,".txt");
	f=fopen(user_data,"rb");
	if(f!=NULL)
	{
			system("cls");
		printf("\n\n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
		printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
		printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB WLCOME TO YAN BANK ");
		printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
		printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
		printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	
		printf("\n\n\n\n\n  %c Account already exist!!!\n\n  %c if not pls try to change your password...\n\n  %c if you want to change your account details then pls go to update info section in main menu...",248,248,248);
		getch();
	}
	else
	{
	
	
		
	
	
	
	f=fopen(user_data,"wb");
	fwrite(&ad,sizeof(struct new_account),1,f);
	
	system("cls");
	
	

	

	if(f!=NULL)
	{
    	printf("\n\n                                  Account successfuly registered\n\n");
    	printf("                              -----------------------------------------");
	    printf("\n\n   Account Credentials are as follows: \n\n");
     	printf("\n  %c Account name is %s\n\n",248,ad.name);
    	printf("\n  %c Password is %s\n\n",248,ad.pass);
    	printf("\n  %c Current Balance: %f",248,ad.amount);
    	
    
    } 
	else
	{
	    printf("     Some error occurred please try again later...");
	    
    }
    fclose(f);
    
    
    f=fopen("C:/Users/admin/Documents/customers_list.txt","a");
   fprintf(f," %s %s %s %s %s ",ad.name,ad.mob,ad.dob,ad.citi_num,ad.add);
    fclose(f);
    
    printf("\n\n\n\n Do not share your password with anyone for any reason.");
    printf("\n\n Please go to transation section in main menu for depositing money in you account...");
    printf("\n\n Press any key to go back to main menu...");
    getch();
    printf("\n\n\n\n                                                                                                      loading\n");                       
   	printf("                                                                                            please wait....");
		for(int i=0;i<=1000000000-1000000;i++)
		{}
    
    
   
}
	

}


//function for updating user data
void update_info()
{
system("cls");
 printf("\n\n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB USER ACCOUNT INFO  ");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\n\n\n\n   Please enter below details to proceed....",248);
 

time_t now;
time(&now);


FILE *old,*new_r;
char cre_name[50],cre_pass[50];
printf("\n\n\n  %c Enter account name: ",248);
scanf("%s",&cre_name);
printf("\n  %c Enter password: ",248);
scanf("%s",&cre_pass);
char address[100]="C:/Users/admin/Documents/";
char *cp_1=strcat(cre_pass,".txt");
char *cp_2=strcat(cre_name,cp_1);
char *cp_3=strcat(address,cp_2);
old=fopen(cp_3,"rb");
system("cls")    ;
if(old==NULL)
{
	printf("Error: File can't be opened at this moment");
}
else
{

while(fread(&ad,sizeof(struct new_account),1,old)>0)
{
	printf("\n\n Your current account details are as follows:  \n\n\n [1] Date of Birth: %s\n [2] Mobile number: %s\n [3] Address: %s\n [4] Citizenship number: %s\n   ",ad.dob,ad.mob,ad.add,ad.citi_num);
	
}
}
fclose(old);
int ch;
printf("\n\n Enter your choice(e.g.1,2,4..): ");
scanf("%d",&ch);




switch(ch)
{
	case 1:
	char new_dob[20]; printf(" Enter new date of birth:  ");
	scanf("%s",&new_dob);
	strcpy(ad.dob,new_dob);
	new_r=fopen("C:/Users/admin/Documents/new_record.txt","wb");
	
	fwrite(&ad,sizeof(struct new_account),1,new_r);
	fclose(new_r);
	
	remove(cp_3);
	rename("C:/Users/admin/Documents/new_record.txt",cp_3);
	
	new_r=fopen(cp_3,"rb");
	while(fread(&ad,sizeof(struct new_account),1,new_r)>0)
	{
		printf("\n\nDate of birth changed successfully!!\n\n");
		printf("\n Your updated account details are as follows:  \n\n\n [1] Date of Birth: %s\n [2] Mobile number: %s\n [3] Address: %s\n [4] Citizenship number: %s\n   ",ad.dob,ad.mob,ad.add,ad.citi_num);
	     getch();
	}
	fclose(new_r);
		break;
		
	case 2:
	char new_mobile_num[20];
	printf(" Enter new mobile number:  ");
	scanf("%s",&new_mobile_num);
	strcpy(ad.mob,new_mobile_num);
	new_r=fopen("C:/Users/admin/Documents/new_record.txt","wb");
	
	fwrite(&ad,sizeof(struct new_account),1,new_r);
	fclose(new_r);
	
	remove(cp_3);
	rename("C:/Users/admin/Documents/new_record.txt",cp_3);
	
	new_r=fopen(cp_3,"rb");
	while(fread(&ad,sizeof(struct new_account),1,new_r)>0)
	{
		printf("\n\nMObile number changed successfully!!\n\n");
		printf("\n Your updated account details are as follows:  \n\n\n [1] Date of Birth: %s\n [2] Mobile number: %s\n [3] Address: %s\n [4] Citizenship number: %s\n   ",ad.dob,ad.mob,ad.add,ad.citi_num);
	    
	}
	 getch();
	 fclose(new_r);
		break;
		
		
	case 3:
		char new_add[20];
	printf(" Enter new Address:  ");
	scanf("%s",&new_add);
	strcpy(ad.add,new_add);
	new_r=fopen("C:/Users/admin/Documents/new_record.txt","wb");
	
	fwrite(&ad,sizeof(struct new_account),1,new_r);
	fclose(new_r);
	
	remove(cp_3);
	rename("C:/Users/admin/Documents/new_record.txt",cp_3);
	
	new_r=fopen(cp_3,"rb");
	while(fread(&ad,sizeof(struct new_account),1,new_r)>0)
	{
		printf("\n\nAddress changed successfully!!\n\n");
		printf("\n Your updated account details are as follows:  \n\n\n [1] Date of Birth: %s\n [2] Mobile number: %s\n [3] Address: %s\n [4] Citizenship number: %s\n   ",ad.dob,ad.mob,ad.add,ad.citi_num);
	    
	}
	 getch();
	 fclose(new_r);
		break;
		
		
	case 4:
	char new_cit[20];
	printf(" Enter new citizenship number:  ");
	scanf("%s",&new_cit);
	strcpy(ad.citi_num,new_cit);
	new_r=fopen("C:/Users/admin/Documents/new_record.txt","wb");
	
	fwrite(&ad,sizeof(struct new_account),1,new_r);
	fclose(new_r);
	
	remove(cp_3);
	rename("C:/Users/admin/Documents/new_record.txt",cp_3);
	
	new_r=fopen(cp_3,"rb");
	while(fread(&ad,sizeof(struct new_account),1,new_r)>0)
	{
		printf("\n\ncitizenship number successfully!!\n\n");
		printf("\n Your updated account details are as follows:  \n\n\n [1] Date of Birth: %s\n [2] Mobile number: %s\n [3] Address: %s\n [4] Citizenship number: %s\n   ",ad.dob,ad.mob,ad.add,ad.citi_num);
	    
	}
	 getch();
	 fclose(new_r);
		break;
	default:
		printf("Invalid choice!!");
		break;
		

}





	
}



void atm()
{
	bool choice2=true;
	system("cls");
    time_t now;
    time(&now);
    
    printf("\n\n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB WLCOME TO YAN ATM ");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\n\n\n\n   Please enter below details to proceed....",248);
    
	struct new_account ad;
	
	FILE *new_r ,*old,*f; 
	
    
	char cre_name[50],cre_pass[50];
	printf("  \n\n\n  %c Enter Name : ",248);
    scanf("%s",&cre_name);
    printf("\n\n  %c Enter password : ",248);
    scanf("%s",&cre_pass);
    char *plus_txt=strcat(cre_pass,".txt");
    char *com_file_name=strcat(cre_name,plus_txt);
    char cre_address[80]="C:/Users/admin/Documents/";
    char *com_file_name_2=strcat(cre_address,com_file_name);
    
    f=fopen(com_file_name_2,"rb");
    fread(&ad,sizeof(struct new_account),1,f);
    if(f==NULL)
    {
    	printf("\a");
    	printf("\n\n  Wrong name or password please try again...");
    	printf("\n\n  Press any key to go back to Main menu.....");
    	getch();
    	fclose(f);
	}
	
    else
    {
        
        system("cls");
        printf("\n\n        WELCOME %s!!!",strupr(ad.name));
        fclose(f);
       

          
	        system("cls");
	        printf("        \n                                                    YAN NATIONAL BANK\n\n      ");
            printf("                                      \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ATM SECTION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n");
            printf("        [1] DEPOSIT AMOUNT\n        [2] WITHDRAW AMOUNT\n");
            printf("        [3] exit ");

   	
   	
            printf("\n\n\n        Enter your choice: ");
            int ch;
            scanf("%d",&ch);
            printf("\n\n\n\n                                                                                                      loading\n");                       
         	printf("                                                                                            please wait....");
		    for(int i=0;i<=1000000000-1000000;i++)
		    {}
		    system("cls");
   

            switch(ch)
           {
   	
   	            case 1:
				   {
				   printf("\n\n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	            printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
               	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  YAN ATM  ");
	            printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	            printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
            	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB ");
				float dep_amount;
   	            old=fopen(com_file_name_2,"rb");
   	            fread(&ad,sizeof(struct new_account),1,old);
   	            
			    printf("\n\n  %c Your current balance is INR %f",43,ad.amount);
                
                fclose(old);
   	
   	            printf("\n\n  %c Enter the amount to be deposit : INR ",43);
   	            scanf("%f",&dep_amount);
   	            
   	            
				
				
                
                ad.deposit_amount=dep_amount;
	            new_r=fopen("C:/Users/admin/Documents/new_file.txt","wb");
	            ad.amount += dep_amount;
                strcpy(ad.deposit_t,ctime(&now));
   	            fwrite(&ad,sizeof(struct new_account),1,new_r);
   	            fclose(new_r);
   	
   
    
                new_r=fopen("C:/Users/admin/Documents/new_file.txt","rb");
   	            fread(&ad,sizeof(struct new_account),1,new_r);
   	            printf("\n  %c Account Balance is INR %f",43,ad.amount);
   	            printf("\n\n\n\n\n    Amount deposited successfully!!!!!");
   	            printf("\n\n    press any key to go back to ATM menu...");
        
       
                fclose(new_r);
               

   	remove(com_file_name_2);
	rename("C:/Users/admin/Documents/new_file.txt",com_file_name_2);
	fclose(new_r);
	getch();
	
	
    
	
	
   	
   
   		break;
   	}
   	case 2:
	   {
				printf("\n\n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	            printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
               	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  YAN ATM  ");
	            printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	            printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
            	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB ");
				float with_amount;
   	            old=fopen(com_file_name_2,"rb");
   	            fread(&ad,sizeof(struct new_account),1,old);
   	            
			    printf("\n\n  %c Your current balance is INR %f",43,ad.amount);
                
                fclose(old);
   	
   	            printf("\n\n  %c Enter the amount to be withdrawn : INR ",43);
   	            scanf("%f",&with_amount);
                    
   	            if(ad.amount<with_amount)
   	            {
   	            	printf("\n\n\n %c Insufficient balance!!!",248);
   	            	getch();
   	            	
				}
				else
				{
                
                	ad.withdrawn_amount=with_amount;
	           		new_r=fopen("C:/Users/admin/Documents/new_file.txt","wb");
	           		ad.amount -= with_amount;
               		strcpy(ad.with_t,ctime(&now));
   	            	fwrite(&ad,sizeof(struct new_account),1,new_r);
   	            	fclose(new_r);
   	
   
    
                	new_r=fopen("C:/Users/admin/Documents/new_file.txt","rb");
   	           		fread(&ad,sizeof(struct new_account),1,new_r);
   	           		printf("\n  %c Account Balance is INR %f",43,ad.amount);
   	           	    printf("\n\n\n\n\n    Amount withdrawn successfully!!!!!");
   	            	printf("\n\n    press any key to go back to ATM menu...");
        
       
                	fclose(new_r);
               

   					remove(com_file_name_2);
					rename("C:/Users/admin/Documents/new_file.txt",com_file_name_2);
					fclose(new_r);
			
					getch();
					
					

    
              }
   	break;
   	
   }
	  
   		
   		
   		
   	case 3:
	   {
		 choice2=false;
   		break;
   }
	default:
	{
	  
   		printf("Invalid choice");
   		break;
   		
   }
 }

	
}
   
   
   	
  
 
  
  
   
	
}

void acc_info()
{

    
	struct new_account ad;
	char cre_name[50],cre_pass[20];
	FILE *f;
	system("cls");
	printf("\n\n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB USER ACCOUNT INFO  ");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\n\n\n\n   Please enter below details to proceed....",248);
	
    printf("  \n\n\n   %c Account Name : ",248);
    scanf("%s",&cre_name);
    printf("\n\n   %c Password : ",248);
    scanf("%s",&cre_pass);
    
    char *plus_txt=strcat(cre_pass,".txt");
    char *com_file_name=strcat(cre_name,plus_txt);
    char address[50]="C:/Users/admin/Documents/";
    char *com_file_name_2=strcat(address,com_file_name);

    
    f=fopen(com_file_name_2,"r");
    fread(&ad,sizeof(struct new_account),1,f);
    
     if(f==NULL)
    {
    	printf("\a");
        printf("\n\nWrong name or password please try again...");
	}
	else
	{
		
    printf("\n\n\n\n\n                                                                                                      loading\n");                       
   	printf("                                                                                            please wait....");
   	for(int i=0;i<=1000000000-1000000;i++)
		{}
		
	system("cls");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB USER ACCOUNT INFO  ");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	
	printf("\n\n\n User Profile :\n\n %c Name: %s\n %c Date of birth: %s\n %c Mobile number: %s\n %c Address: %s\n %c Citizenship number: %s\n %c Current balance: %f\n \n\n  ",248,ad.name,248,ad.dob,248,ad.mob,248,ad.add,248,ad.citi_num,248,ad.amount);
	printf(" \n %c Amount INR %f was Deposited last time on %s\n",248,ad.deposit_amount,ad.deposit_t);
   	printf(" %c Amount INR %f was withdrawn last time on %s\n\n",248,ad.withdrawn_amount,ad.with_t);
	printf("\n\n\n________________________________________________________________________________________________________________________");
    printf("\n\n %c Account created on : %s",248,ad.time);
    printf("\n %c if any above user details are wrong please go to the 'Update information on existing account' section \n   in the main menu ",248);
		
	}

    fclose(f);
	getch();
	
	
}

void del_acc()
{
	  system("cls");
	time_t now;
    time(&now);
    printf("\n\n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB USER ACCOUNT INFO  ");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\n\n\n\n   Please enter below details to proceed....",248);
 
	char cre_name[50],cre_pass[20];

 printf("  \n\n\n   %c Account Name : ",248);
    scanf("%s",&cre_name);
    printf("\n\n   %c Password : ",248);
    scanf("%s",&cre_pass);
    
    char *plus_txt=strcat(cre_pass,".txt");
    char *com_file_name=strcat(cre_name,plus_txt);
    char address[50]="C:/Users/admin/Documents/";
    char *com_file_name_2=strcat(address,com_file_name);
    
	if(remove(com_file_name_2)==0)
	{
		printf("\n\n  The Account successfully deleted!!!");
	}
	else
	{
		printf("\a\n\n  Failed to access the account try again later!!!");
	}
	getch();
}

void transaction_history()
{
	system("cls");
	printf("\n\n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB WLCOME TO YAN ATM ");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\n\n\n\n   Please enter below details to proceed....",248);
    
	
	FILE *f; 
	
    
	char cre_name[50],cre_pass[50];
	printf("  \n\n\n  %c Enter Name : ",248);
    scanf("%s",&cre_name);
    printf("\n\n  %c Enter password : ",248);
    scanf("%s",&cre_pass);
    char *plus_txt=strcat(cre_pass,".txt");
    char *com_file_name=strcat(cre_name,plus_txt);
    char cre_address[80]="C:/Users/admin/Documents/";
    char *com_file_name_2=strcat(cre_address,com_file_name);
    
    f=fopen(com_file_name_2,"rb");
    fread(&ad,sizeof(struct new_account),1,f);
    if(f==NULL)
    {
    	printf("\a");
    	printf("\n\n  Wrong name or password please try again...");
    	printf("\n\n  Press any key to go back to Main menu.....");
    	getch();
    	fclose(f);
	}
	
    else
    {
        	system("cls");
            	
            printf("\n\n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
			printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
			printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB WLCOME TO YAN ATM ");
			printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
			printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
			printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n\n\n");
            	f=fopen(com_file_name_2,"rb");
            	
            	while(fread(&ad,sizeof(struct new_account),1,f)>0)
            	{
				
            	printf(" \n\n %c Amount INR %f was Deposited last time on %s\n\n",248,ad.deposit_amount,ad.deposit_t);
            	printf(" %c Amount INR %f was withdrawn last time on %s\n\n",248,ad.withdrawn_amount,ad.with_t);
	      
                }
            
                getch();
                
            	
           
            
    }
}


void customer_list()
{
	system("cls");
	time_t now;
    time(&now);
  

	FILE *f;
	f=fopen("C:/Users/admin/Documents/customers_list.txt","rb");
	
	printf("\n\n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB CUSTOMERS LIST ");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB \n\n");
    int count=1;
    
     printf("                                                 USERS RECORD \n\n\n");
    while( fscanf(f,"%s %s %s %s %s",ad.name,ad.mob,ad.dob,ad.add,ad.citi_num)!=EOF)
    {
    printf("  %d .  %s           %s             %s          %s                %s\n",count,ad.name,ad.dob,ad.mob,ad.add,ad.citi_num);
    printf("\n");
    count++;
    }
	
	fclose(f);
	getch();
}



void main_menu()
{
	


   printf("          \n                                              BANKING MANAGEMENT SYSTEM \n\n\n      ");
   printf("                             \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n");
   printf("        [1] Create a new account\n        [2] Update information on existing account\n        [3] Transactions and ATM features\n        [4] Check details of existing account\n        [5] Remove existing account\n ");
   printf("       [6] View customer's list\n        [7] Transaction History\n        [8] exit        ");
   
   printf("\n\n\n        Enter your choice: ");
   	int ch;
   scanf("%d",&ch);
  
 
  
  
   switch(ch)
   {
   	
   	case 1:printf("\n\n\n\n                                                                                                      loading\n");                       
   	printf("                                                                                            please wait....");
		for(int i=0;i<=1000000000-1000000;i++)
		{}
	    
	   system("cls");
	   new_acc();
	   
   		break;
   	case 2:printf("\n\n\n\n                                                                                                      loading\n");                       
   	printf("                                                                                            please wait....");
		for(int i=0;i<=1000000000-1000000;i++)
		{}
	    update_info();
	    break;	
   	case 3:printf("\n\n\n\n                                                                                                      loading\n");                       
   	printf("                                                                                            please wait....");
		for(int i=0;i<=1000000000-1000000;i++)
		{} 
	      atm();
       
   		break;
   	case 4:printf("\n\n\n\n                                                                                                      loading\n");                       
   	printf("                                                                                            please wait....");
		for(int i=0;i<=1000000000-1000000;i++)
		{}acc_info();
	   break;   	
   	case 5:printf("\n\n\n\n                                                                                                      loading\n");                       
   	printf("                                                                                            please wait....");
		for(int i=0;i<=1000000000-1000000;i++)
		{}del_acc();
   		break;
   	case 6:
	   printf("\n\n\n\n                                                                                                      loading\n");                       
   	printf("                                                                                            please wait....");
		for(int i=0;i<=1000000000-1000000;i++)
		{}customer_list();
	    break;
   		case 7:printf("\n\n\n\n                                                                                                      loading\n");                       
   	printf("                                                                                            please wait....");
		for(int i=0;i<=1000000000-1000000;i++)
		{}transaction_history();
		
   	case 8:
   		printf("\n\n\n\n                                                                                                     exiting....");
		for(int i=0;i<=1000000000-1000000;i++)
		{}
   		choice = false;

	   
	    break;
	default:
		printf("Invalid choice");
		break;
   }
   


   
 
}


//function for welcome window
 void wel_bank()
{
	
	   time_t now;
	   time(&now);
	   printf(" Visited: %s", ctime(&now));
    
	
	 printf("          \n                                             BANKING MANAGEMENT SYSTEM \n\n\n\n      ");
   printf("                                \xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE YAN BANK \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n");
	
	
	
	        printf("                                         _._._                       _._._");
	        printf("\n");
	        
        printf("                                        _|   |_                     _|   |_");
        printf("\n");
        printf("                                        | ... |_._._._._._._._._._._| ... |");
        printf("\n");
        printf("                                        | ||| |  o NATIONAL BANK o  | ||| |");
        printf("\n");
        printf("                                        | ''' |  '''    '''    '''  | ''' |");
        printf("\n");
   printf("                                   ())  |[-|-]| [-|-]  [-|-]  [-|-] |[-|-]|  ())");
   printf("\n");
  printf("                                  (())) |     |---------------------|     | (()))");
  printf("\n");
 printf("                                 (())())| ''' |  '''    '''    '''  | ''' |(())())");
 printf("\n");
 printf("                                 (()))()|[-|-]|  :::   .-^-.   :::  |[-|-]|(()))()");
 printf("\n");
 printf("                                 ()))(()|     | |~|~|  |_|_|  |~|~| |     |()))(()");
 printf("\n");
    printf("                                    ||  |_____|_|_|_|__|_|_|__|_|_|_|_____|  ||");
    printf("\n");
 printf("                                 ~ ~^^ @@@@@@@@@@@@@@/=======/@@@@@@@@@@@@@@ ^^~ ~");
 printf("\n");
      printf("                                     ^~^~                                ~^~^");
	printf("\n");
	
	printf("\n                                     Press Enter to proceed to the the Main menu.....");
	char enter;
	scanf("%c",&enter);
	
	if(enter==10)
	{
		printf("\n\n\n\n                                                                                                      please wait....");
		for(int i=0;i<=1000000000-1000000;i++)
		{}
		system("cls");
		while(choice)
		{
		   system("cls");
		   main_menu();
	    }
	}
	else
	{
		exit(1);
	}
	
}









int main()
{   
    //statrting program by calling wel_bank() fuction
	 wel_bank();
	
	
}
