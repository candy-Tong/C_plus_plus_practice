#include<stdio.h>
char scaner(char*input,int* p);
void S(char*input,int* p);
void T(char*input,int* p);
void T1(char*input,int* p);
void error();
int sym=0;
int main()
{
 int p=0;
 char input[200]={0};

 printf("请输入你要识别的单词\n");
 printf("单词只能由 ( ) a ^ , 组成，且单词必须以$#结尾\n");
 scanf("%[^#]s",input);
 printf("the word you input is  : %s\n",input);
 sym=scaner(input,&p);
 S(input,&p);
 
 if(sym=='$')
      printf("sucess\n");
 else 
      printf("fail");
      
do 
{
   ;   }while(1);      
    
 return 0;    
}
char scaner(char*input,int *p)
{
 char temp=input[*p];
  (*p)++;
 return temp;     
}
void S(char*input,int* p)
{ 
 if(sym=='a'||sym=='^')
       sym=scaner(input,p);
 else if(sym=='(')
      {
       sym=scaner(input,p);
       T(input,p);
       if(sym==')')
              sym=scaner(input,p);
       else 
              error();     
      }
 return ;
 }
 void T(char*input,int* p)
 {
 S(input,p);
 T1(input,p);
 return ;     
 }
 void T1(char*input,int* p)
 {
  if(sym==','){
       sym=scaner(input,p);
       S(input,p);
       T1(input,p);} 
  else if(sym!=')')
       error();
           
 }
 void error()
 {
        printf("error!!!");
        return ;
        }
        
