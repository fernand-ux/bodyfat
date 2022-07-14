#include<stdio.h>
#include<math.h>

main(){
  int genero;
  int i,j,k,l,m,n,o,q,r;
  float t,p;
  printf("\npressione 1 se homem, 2 se mulher: ");
  scanf("\n%d",&genero);
  system("cls");


  if(genero==1){
  printf("\nsua medida do pescoço: ");
  scanf("\n%d",&i);
  printf("\nsua altura: ");
   scanf("\n%d",&j);
  printf("\nsua medida de cintura: ");
   scanf("\n%d",&k);
   printf("\nseu peso: ");
   scanf("\n%d",&l);
   printf("\nsua idade: ");
   scanf("\n%d",&o);

  t=495/((1.0324-0.19077*(log10(k-i)))+0.15456*(log10(j)))-450;
  m=t*l/100;n=l-m;
  p=l/((j/100)^2);q=66 + (13.8 * l) + (5.0 * j) - (6.8 * o);
  printf("\nseu bf %lf",t);
  printf("\n\n%d kg de gordura",m);
  printf("\t\t %d kg de musculos",n);
  printf("\n\nseu imc %f",p);
  printf("\tgasto metabolico basal %d",q);


  getch();

  system("cls");

  main();

  }
  else if(genero==2){
  printf("\nsua medida do pescoço: ");
  scanf("\n%d",&i);
  printf("\nsua altura: ");
   scanf("\n%d",&j);
  printf("\nsua medida de cintura: ");
   scanf("\n%d",&k);
  printf("\nsua medida do quadril: ");
   scanf("\n%d",&r);
   printf("\nseu peso: ");
   scanf("\n%d",&l);
   printf("\nsua idade: ");
   scanf("\n%d",&o);

  t=495/(1.29579-.35004*(log10(k+r-i))+.22100*(log10(j)))-450;
  m=t*l/100;n=l-m;
  p=l/((j/100)^2);q=655 + (9.6 * l) + (1.8 * j) - (4.7 * o) ;
  printf("\nseu bf %lf",t);
  printf("\n\n%d kg de gordura",m);
  printf("\t\t %d kg de musculos",n);
  printf("\n\nseu imc %f",p);
  printf("\tgasto metabolico basal %d",q);


  getch();

  system("cls");

  main();
   }
   else printf("escolha uma das opções");
    getch();
    main();

}
