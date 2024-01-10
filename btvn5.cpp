#include<stdio.h>
int main (){
	int soluong;
	printf ("So luong phan tu cua mang nay la :");
	scanf ("%d", &soluong );
	int a[soluong];
	int i;
	for (i=0; i<soluong ; i++){
		printf ("Nhap vao phan tu array[%d]",i);
		scanf ("%d", &a[i] );
	}
	a[0]=5; a[2]=3; a[1]=0; a[3]=0; a[4]=0; a[5]=0; a[6]=0; a[7]=0; a[8]=8; a[9]=0;
    printf (" Phan tu array [0] la %d\n", a[0]);
	printf (" Phan tu array [1] la %d\n", a[1]);
	printf (" Phan tu array [2] la %d\n", a[2]);
	printf (" Phan tu array [3] la %d\n", a[3]);
	printf (" Phan tu array [4] la %d\n", a[4]);
	printf (" Phan tu array [5] la %d\n", a[5]);
	printf (" Phan tu array [6] la %d\n", a[6]);
	printf (" Phan tu array [7] la %d\n", a[7]);
	printf (" Phan tu array [8] la %d\n", a[8]);
	printf (" Phan tu array [9] la %d\n", a[9]);
	int soluongpt;
	printf ("So luong phan tu cua mang nay la : ");
	scanf ("%d", &soluongpt );
	// while ()
}


