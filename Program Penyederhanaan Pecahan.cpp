#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
void choice();
void choice2();
void title();
int gcd(int x,int y);
int main()
{
	int T,num,num2,fpb;
	system("title Program Penyederhaan Pecahan");
	title();
	printf("Masukkan Testcase :\n");
	printf(">>");
	scanf("%d",&T);
	system("cls");
	title();
	for(int i=0;i<T;i++){
		printf("Data ke %d\n",i+1);
		printf("Masukkan 2 angka dengan format [angka/angka] :\n");
		printf(">>");
		scanf("%d/%d",&num,&num2);
		fpb	= gcd(num,num2);
		num = num / fpb;
		num2 = num2 / fpb;
		if(num==num2)  printf("Hasil Penyederhanaan Pecahan : 1\n");
        
        else if(num2==0) printf("Hasil Penyederhanaan Pecahan : Tak Hingga/Tidak ada Output\n");
        
        else if(num==0) printf("Hasil Penyederhanaan Pecahan : 0\n");
        
        else if(num2==1) printf("Hasil Penyederhanaan Pecahan : %d\n",num);
        
        else if(num2==-1) printf("Hasil Penyederhanaan Pecahan : -%d\n",num);
        
        else if(num2<0) printf("Hasil Penyederhanaan Pecahan : %d/%d\n",num*-1,num2*-1);
        
        else printf("Hasil Penyederhanaan Pecahan : %d/%d\n",num,num2);
        if(i<T-1){
		printf("\n");
        system("pause");
        system("cls");
        title();
		}
		else{
			printf("\n");
			printf("========================================================================\n");
			printf("||	               TERIMA KASIH JUMPA KEMBALI :D        	      ||\n");
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			puts("");
			choice();
		}
	}
}
int gcd(int x,int y)
{
	if (x == 0) return y;
	
	return gcd(y % x,x);
}
void choice()
{
	int as; double xz;
	char nama1[] = "Dibuat oleh :\n";
	char nama[] = "Nicholas Valenthinus Tanoto 2401960624 - GAT\n";

	for(as=0;nama1[as]!=NULL;as++)
	{
		printf("%c",nama1[as]);
		for(xz=0;xz<=8888888;xz++)
		{
		}
	}

	for(as=0;nama[as]!=NULL;as++)
	{
		printf("%c",nama[as]);
		for(xz=0;xz<=8888888;xz++)
		{
		}
	}
}
void title()
{
	printf("----------------------------------------------Program Penyederhanaan Pecahan-------------------------------------------\n");
}
