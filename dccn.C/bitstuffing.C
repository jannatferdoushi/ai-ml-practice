//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//  int i, j = 0, k = 0, count = 0;
//  char data[100], stuffed[200], destuffed[200];
//
//  printf("Enter bit stream:");
//  scanf("%s", data);
//
//  for (i = 0; i < strlen(data); i++)
//  {
//    stuffed[j++] = data[i];
//    if(data[i]=='1')
//    count++;
//    else 
//    count = 0;
//  
//  if(count == 5){
//     stuffed[j++]='0';
//    count = 0;
//  }
//  }
//
// stuffed[j] = '\0'; 
// printf("\nstuffed data:%s\n",stuffed);
//
// count = 0;
// for(i = 0;i<j;i++){
//  destuffed[k++]=stuffed[i];
//    if(stuffed=="1")
//    count++;
//    else
//    count = 0;
//
//
// if(count == 5 && stuffed[i+1]=='0'){
//    i++;
//    count=0;
// }
// }
// destuffed[k] = '\0';
// printf("\ndestuffed data\n",destuffed);
// return 0;
//}


#include<stdio.h>
#include<string.h>
int main(){

  char data[100],stuffed[200],destuffed[200];
  int i,j=0,k=0;


   printf("Enter data:");
   scanf("%s",data);

  for(i = 0;i<strlen(data);i++){
    if(data[i]=='F'|| data[i]=='E'){
    stuffed[j++]='E';
    }
    stuffed[j++] = data[i];
  }


stuffed[j]='\0';
printf("stuffed data:%s\n",stuffed);


for(i=0;i<strlen(stuffed);i++){
  if(stuffed[i]=='E'){
    i++;
  }
    destuffed[k++] = stuffed[i];
  }

destuffed[k]=='\0';
printf("destuffed data:%s\n",destuffed);
return 0;
}
