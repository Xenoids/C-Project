#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
void choice();
enum mhs{NIM = 1, email, noAbsen};
	
struct Data{
		union identity{
			char NIM[11];
			char email[50];
			int noAbsen;
		} identity;
		int nilai;
		} Data;

int main()
{
	system("title Program Input Nilai");
	int T;
	printf("----------------------------------------------Program Penginputan Nilai-------------------------------------------------\n");
	choice();
	printf("Masukkan data yang akan disimpan :\n");
	printf(">>");
	scanf("%d",&T);
	enum mhs x[T];
	struct Data y[T];
	for(int i=0;i<T;i++){
		do{
		printf("Pilihlah metode penginputan nilai ! [1 untuk NIM , 2 untuk email dan 3 untuk absen] :\n");
		printf(">>");
		scanf("%d",&x[i]);
		}while(!(x[i] == 3 || x[i] == 2 || x[i] == 1));
		if(x[i] == 1) 
		{
            printf("Input NIM Anda:\n");
            printf(">>");
            scanf("%s",y[i].identity.NIM);
		}
		else if(x[i] == 2)
		{
			printf("Input Email Anda:\n");
			printf(">>");
			scanf("%s",y[i].identity.email);
		}
		else if(x[i] == 3)
		{
			printf("Input NoAbsen Anda:\n");
			printf(">>");
			scanf("%d",&y[i].identity.noAbsen);
		}
		do{
		printf("Input Nilai Anda:[0-100]\n");
		printf(">>");
		scanf("%d",&y[i].nilai);
		}while(y[i].nilai <=-1 || y[i].nilai >=101);
	}
	system("cls");
	printf("Data Nilai Input\n");
	printf("----------------------------------------------------------------------------\n");
	for(int j=0;j<T;j++){
		if(x[j] == 1) 
		{
			printf("NIM		:");
			printf("%s\n",y[j].identity.NIM);
		}
		else if(x[j] == 2)
		{
			printf("Email		:");
			printf("%s\n",y[j].identity.email);
		}
		else if(x[j] == 3)
		{
			printf("NoAbsen		:");
			printf("%d\n",y[j].identity.noAbsen);
		}
		printf("Nilai		:");
		printf("%d\n",y[j].nilai);
		printf("\n\n");
	}

}
void choice()
{
	int as; double xz;
	char nama1[] = "Dibuat oleh :\n";
	char nama[] = "Nicholas Valenthinus Tanoto 2401960624 - GAT\n\n";

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

	
	

