
#include "money.h"
void acceptpassword(int PIN){
  int EnteredPassword;
  int validpassword = 0;
  int attempts = 0;
  int maxAttempts = 3;

  do{
      scanf("%d", &EnteredPassword);
      attempts += 1;
      if(EnteredPassword == PIN){
          validpassword = 1;
          printf("ok");
      }else{
          printf("The Password you entered in invalid.\n");
          printf("Enter a valid Password %d more attempts: ", maxAttempts-attempts);
      }
      if(attempts>=maxAttempts){
          printf("\npin blocked!.Visit our customer care \n");
          exit(1);
      }
  }while(validpassword == 0);
}
//Till here
int with_Amt(int withdraw, int Amt)
{
printf("Amt=%d w=%d",Amt,withdraw);
if(withdraw%100==0)
 {
  if(Amt>=withdraw)
      {
      Amt=Amt-withdraw;
      printf("Amount After withdrawl of Amt is %d\n",Amt);
     }
     else
  {
  printf("You don't have enough Amount to Withdraw.Please Deposit Amount\n");
      }
 }
 else
 {
  printf("Enter Withdrawl Amount in 100's\n");
 }
}

int deposits_Amt(int deposit,int Amt)
{
printf("Amt=%d w=%d",Amt,deposit);
  if(deposit%100==0)
 {
     Amt=Amt+deposit;
     printf("Balance After Depositing Amount is %d\n",Amt);
 }
 else
 {
  printf("Please Enter Amount in 100's\n");
 }
}
int to_send(int send,int Amt)
{

   int money,acc_no,re_acc_no;

   printf("Enter the account number:\n ");
   scanf("%d",&acc_no);
   printf("Enter the re-account number: \n");
   scanf("%d",&re_acc_no);
   if(acc_no==re_acc_no)
   {
       printf("confirm\n");
   }
   else
   {
       printf("Re-enter the account number\n");
       
   }
   if(send>Amt)
   {
       printf("Insufficent Amt\n");
   }
   else
   {
       money=Amt-send;
       printf("The remaining amount is:%d\n",money);
   }
}
