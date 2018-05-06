Welcome to the Emacs shell

~/Desktop/Cintro/week12 $ gcc -o daonguoc daonguoc.c
~/Desktop/Cintro/week12 $ ./daonguoc
Nhap x: 234567
7654332764
~/Desktop/Cintro/week12 $ ./daonguoc
Nhap x: 123
328
~/Desktop/Cintro/week12 $ ./daonguoc
Nhap x: 1234
43248
~/Desktop/Cintro/week12 $ gcc -o daonguoc daonguoc.c
daonguoc.c: In function ‘reverseInt’:
daonguoc.c:7:16: error: ‘n’ undeclared (first use in this function)
   for( i=0; i<=n; i++){
                ^
daonguoc.c:7:16: note: each undeclared identifier is reported only once for each function it appears in
daonguoc.c:8:16: error: ‘a’ undeclared (first use in this function)
   printf("%d", a[i]);
                ^
daonguoc.c: In function ‘main’:
daonguoc.c:32:14: warning: passing argument 1 of ‘reverseInt’ makes integer from pointer without a cast [-Wint-conversion]
   reverseInt(&x);
              ^
daonguoc.c:5:6: note: expected ‘int’ but argument is of type ‘int *’
 void reverseInt(int x){
      ^
~/Desktop/Cintro/week12 $ 