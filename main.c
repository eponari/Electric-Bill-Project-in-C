#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu();
void searchc();
double bill(int amn){
double cs;
if(amn<=300){
    cs=amn*9.2;}
else if(amn>300&&amn<=600){
    cs=300*9.2+(amn-300)*8.3;}
else if(amn>600&&amn<=1000){
    cs=300*9.2+300*8.3+(amn-600)*6;}
else{
    cs=300*9.2+300*8.3+400*6+(amn-1000)*4;}
return cs;}
void histogram(int c[10][12]){
    int k,j=0,i=0;
    char ans;
    double cst[10][12];
    for(i=0;i<10;i++){
        for(j=0;j<12;j++){
            cst[i][j]=bill(c[i][j]);}}
    for(j=0;j<12;j++){
    printf("Client\tBill of month:%d (1*=1000L) \n",j+1);
    for(i=0;i<10;i++){
    printf("%d\t",i+1);
    for(k=0;k<cst[i][j];k+=1000){
    printf("*");}
    printf("\n");}}
    printf("\n\nDo you want to continue or save?(c/s)");
    scanf(" %c", &ans);
    system("CLS");
    if(ans=='c'){
    menu();}
    else if(ans=='s'){
        FILE *save;
        save=fopen("Data.txt","a");
        for(j=0;j<12;j++){
    fprintf(save,"Client\tBill of month:%d (1*=1000L) \n",j+1);
    for(i=0;i<10;i++){
    fprintf(save,"%d\t",i+1);
    for(k=0;k<cst[i][j];k+=1000){
    fprintf(save,"*");}
    fprintf(save,"\n");}}
    fprintf(save,"\n\n");
    fclose(save);}}
void cost(int c[10][12]){
    char ans;
    int j=0,i=0;
    double cst[10][12],totalamn[12]={},totalc[12]={};
    for(i=0;i<10;i++){
        for(j=0;j<12;j++){
            cst[i][j]=bill(c[i][j]);
            totalc[j]+=cst[i][j];
            totalamn[j]+=c[i][j];}}
printf("Client\tJan\tBill\tFeb\tBill\tMar\tBill\tApr\tBill\tMay\tBill\tJun\tBill\n");
printf("------------------------------------------------------------------------------------------------------------- \n");
for(i=0;i<10;i++){
    printf("%d\t",i+1);
    for(j=0;j<6;j++){
    printf("%d\t%.1f\t",c[i][j],cst[i][j]);}
printf("\n");
printf("------------------------------------------------------------------------------------------------------------- \n");}
printf("Total:\t");
for(i=0;i<6;i++){
printf("%.1f\t%.1f\t",totalamn[i],totalc[i]);}
printf("\n\n");
printf("Client\tJul\tBill\tAug\tBill\tSep\tBill\tOct\tBill\tNov\tBill\tDec\tBill\n");
printf("-------------------------------------------------------------------------------------------------------------- \n");
for(i=0;i<10;i++){
    printf("%d\t",i+1);
    for(j=6;j<12;j++){
    printf("%d\t%.1f\t",c[i][j],cst[i][j]);}
printf("\n");
printf("------------------------------------------------------------------------------------------------------------- \n");}
printf("Total:\t");
for(i=6;i<12;i++){
    printf("%.1f\t%.1f\t",totalamn[i],totalc[i]);}
printf("\n\n");
printf("\n\nDo you want to continue or save?(c/s)");
    scanf(" %c", &ans);
    system("CLS");
    if(ans=='c'){
    menu();}
    else if(ans=='s'){
        FILE *save;
        save=fopen("Data.txt","a");
        fprintf(save,"Client\tJan\tBill\tFeb\tBill\tMar\tBill\tApr\tBill\tMay\tBill\tJun\tBill\n");
fprintf(save,"------------------------------------------------------------------------------------------------------------- \n");
for(i=0;i<10;i++){
    fprintf(save,"%d\t",i+1);
    for(j=0;j<6;j++){
    fprintf(save,"%d\t%.1f\t",c[i][j],cst[i][j]);}
fprintf(save,"\n");
fprintf(save,"------------------------------------------------------------------------------------------------------------- \n");}
fprintf(save,"Total:\t");
for(i=0;i<6;i++){
    fprintf(save,"%.1f\t%.1f\t",totalamn[i],totalc[i]);}
fprintf(save,"\n\n");
fprintf(save,"Client\tJul\tBill\tAug\tBill\tSep\tBill\tOct\tBill\tNov\tBill\tDec\tBill\n");
fprintf(save,"-------------------------------------------------------------------------------------------------------------- \n");
for(i=0;i<10;i++){
    fprintf(save,"%d\t",i+1);
    for(j=6;j<12;j++){
    fprintf(save,"%d\t%.1f\t",c[i][j],cst[i][j]);}
fprintf(save,"\n");
fprintf(save,"------------------------------------------------------------------------------------------------------------- \n");}
fprintf(save,"Total:\t");
for(i=6;i<12;i++){
    fprintf(save,"%.1f\t%.1f\t",totalamn[i],totalc[i]);}
    fclose(save);}}
void generator(int act1,int act2){
    char ans;
    srand (time(NULL));
    int s,j,i,c[10][12];
for(i=0;i<10;i++){
    for(j=0;j<12;j++){
    c[i][j]=rand()%2001;}}
if(act1==1){
printf("Id\t|Jan\t|Feb\t|Mar\t|Apr\t|May\t|Jun\t|Jul\t|Aug\t|Sep\t|Oct\t|Nov\t|Dec\t|Total(KWph) \n");
printf("--------------------------------------------------------------------------------------------------------------------- \n");
for(i=0;i<10;i++){
    printf("%d\t",i+1);
    s=0;
    for(j=0;j<12;j++){
    printf("|%d\t",c[i][j]);
    s+=c[i][j];}
printf("|%d \n",s);}
printf("\n\nDo you want to continue or save?(c/s)");
    scanf(" %c", &ans);
    system("CLS");
    if(ans=='c'){
    menu();}
    else if(ans=='s'){
        FILE *save;
        save=fopen("Data.txt","a");
        fprintf(save,"Id\t|Jan\t|Feb\t|Mar\t|Apr\t|May\t|Jun\t|Jul\t|Aug\t|Sep\t|Oct\t|Nov\t|Dec\t|Total(KWph) \n");
fprintf(save,"--------------------------------------------------------------------------------------------------------------------- \n");
for(i=0;i<10;i++){
    fprintf(save,"%d\t",i+1);
    s=0;
    for(j=0;j<12;j++){
    fprintf(save,"|%d\t",c[i][j]);
    s+=c[i][j];}
fprintf(save,"|%d \n",s);}
    fclose(save);}}
else{
if(act2==0){
    cost(c);}
else if(act2==1){
    histogram(c);}
else if(act2==2){
    searchc(c,0);
}
else if(act2==3){
    searchc(c,1);
}
    }}
void menu(){
int tp1;
printf("Please select of the given options:\n 1) Consumption of 10 costumers.\n 2) Print the database of last year billing.\n 3) Histogram for each customer for last year.\n 4) Search individual bills based on ID and month.\n 5) Save every bill in the system in Data.txt \n (Press any other button to exit.)\n");
    scanf("%d",&tp1);
    system("CLS");
    switch(tp1){
    case 1:
    generator(1,0);
    break;
    case 2:
    generator(0,0);
    break;
    case 3:
    generator(0,1);
    break;
    case 4:
    generator(0,2);
    case 5:
    generator(0,3);}}
int main()
{
    FILE *save;
    save=fopen("Data.txt","w");
    fclose(save);
    printf(" Welcome to the OSHEE billing program!\n");
    menu();
    return 0;}
    void searchc(int c[10][12],int act){
    int m,n,i,j;
    char ans;
    char name[12][10]={"Andy","Micheal","Jim","Angela","Pam","Stanly","Roy","Edison","Alfie","Denis"};
    char sname[12][10]={"Bernard","Scott","Halpert","Martin","Beesly","Hudson","Anderson","Ponari","Solomons","Dani"};
    char tp[10][30]={"Salesman","Manager","Salesman","Accountant","Reception","Salesman","Warehouse worker","Programmer","Businessman:Bakery","Engineer"};
    char month[15][12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    if(act==0){
    while(1){
    printf("Enter the client ID(1-10) and month(1-12):\n");
    scanf("%d%d",&n,&m);
    printf("Name: %s\n",name[n-1]);
    printf("Surname: %s\n",sname[n-1]);
    printf("Month: %s\n",month[m-1]);
    printf("Year: 2019\n");
    printf("Profession: %s\n",tp[n-1]);
    printf("KW spent that month: %d\n",c[m-1][n-1]);
    printf("Bill without taxes: %.1f\n",bill(c[m-1][n-1]));
    printf("Bill after taxes: %.1f\n\n",430+1.1*bill(c[m-1][n-1]));
    printf("Do you want to search another bill,continue or save this data?(b/c/s)\n(Any other key to close...)\n");
    scanf(" %c",&ans);
    if(ans=='b'){
        system("CLS");
        continue;
    }
    else if(ans=='s'){
        FILE *save;
        save=fopen("Data.txt","a");
        fprintf(save,"Name: %s\n",name[n-1]);
    fprintf(save,"Surname: %s\n",sname[n-1]);
    fprintf(save,"Month: %s\n",month[m-1]);
    fprintf(save,"Year: 2019\n");
    fprintf(save,"Profession: %s\n",tp[n-1]);
    fprintf(save,"KW spent that month: %d\n",c[m-1][n-1]);
    fprintf(save,"Bill without taxes: %.1f\n",bill(c[m-1][n-1]));
    fprintf(save,"Bill after taxes: %.1f\n\n",430+1.1*bill(c[m-1][n-1]));
    fprintf(save,"-----------------------------------------------------\n");
    fclose(save);
    system("CLS");
    continue;}
    else{break;}}
    if(ans=='c'){
        menu();
        system("CLS");
    }}
    else{
        FILE *save;
        save=fopen("Data.txt","a");
    for(j=0;j<12;j++){
        for(i=0;i<10;i++){
        fprintf(save,"Name: %s\n",name[i]);
        fprintf(save,"Surname: %s\n",sname[i]);
        fprintf(save,"Month: %s\n",month[j]);
        fprintf(save,"Year: 2019\n");
        fprintf(save,"Profession: %s\n",tp[i]);
        fprintf(save,"KW spent that month: %d\n",c[i][j]);
        fprintf(save,"Bill without taxes: %.1f\n",bill(c[i][j]));
        fprintf(save,"Bill after taxes: %.1f\n\n",430+1.1*bill(c[i][j]));
        fprintf(save,"-----------------------------------------------------\n");}}
        fclose(save);}
    }
