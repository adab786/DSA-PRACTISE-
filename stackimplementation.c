// #include <stdio.h>
// #include <stdlib.h>
// #define CAPASITY 5 // pre processor macrov
//  int top = -1;
// void push(int);
// int pop ();
// void traverse();
// void peep();
// int isempty();
// int isfull();
// int stack[CAPASITY];
// int main () { 
//     int ele;
// int ch;
    
//   while(1){
//     printf("1.push \n ");
//    printf("2.pop \n ");
//    printf("3.traverse \n ");
//    printf("4.peep\n ");
//    printf("5.Quit \n ");


//    printf("enter your choice:\n ");
//    scanf("%d",&ch);

//         switch(ch){
//       case 1 : printf("enter your number :");
//       scanf("%d",&ele);
//       push(ele);
//       break;
//       case 2 : ele=pop();
//       if (ele==0){
//           printf("stack is under flown");

//       }else {
//           printf("poped item : %d\n",ele);

//       }
//              break;
//       case 3 :peep();
//       break;
//       case 4 :traverse();
//       break;
//       case 5 :exit(0);
//       break;
//       default : printf("invalid input");
//   }
//   }
//   return 0;
//   }
//   void push(int ele){
//       if(isfull()){
//           printf("stack is overflown\n");

//       } else{
//           top++;
//     stack[top]=ele;
//     printf("%d pushed\n", ele);
//     }}

//      int isfull(){
//           if(top = CAPASITY-1 ){
//      return 1;
// }else{
//     return 0;

// }}
// int pop(){
//       if(isempty()){
//           return 0;
//       }
//       else{
//          return stack[top--];
//       }
//   }
//  int isempty(){
//       if(top==-1)
//       { return 1;
//       }
//       else{
//           return 0;
//       }

//   }
//   void peep(){
//      if(isempty())
//       {printf("stack is empty");

//   }else{
//     printf("element is %d\n ",stack[top]);
//   }
//   }
//   void traverse()
// {
//     if(isempty()){
//         printf("stack is empty");
//     }else
//     {
//         int i;
//         printf("stack elements are : \n");
//          for(i=top;i>=0;i--){
//             printf("elements are %d\n ",stack[i]);
//         }
            
//     }
// }
#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    //clrscr();
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}
