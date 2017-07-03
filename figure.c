#include<stdio.h>

int main(){
   int i,a=0;
   for(i=0; i<10; i++){
        for(a=0; a<=i; a++){
                putchar('*');
              
}   
     putchar('\n');

}
putchar('\n');
putchar('\n');
for(i=10; i>0; i--){
   for(a=i; a>0; a--){
       putchar('*');
}
putchar('\n');
}  

putchar('\n');
putchar('\n');

for(i=0; i<10; i++){
   for(a=0; a<=i; a++){
         putchar(' ');
}
for(a=i; a<10; a++){
         putchar('*');
}

    putchar('\n');
}
putchar('\n');

for(i=10; i>0; i--){
   for(a=0; a<=i; a++){
       putchar(' ');
} 
for(a=i; a<=10; a++){
    putchar('*');
}
   putchar('\n');
}
putchar('\n');





return 0;
}
