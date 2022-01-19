#include <stdio.h>
// Muhammad Faiz Syukra
//18320027
void main(){

    int A = 0;
    int B = 0;
    int perintah = 0;
    printf("Selamat datang, berikut adalah perintah yang dapat dipilih :\n");
    printf("1 : mengisi A hingga penuh sebanyak 3L\n");
    printf("2 : mengisi B hingga penuh sebanyak 5L\n");
    printf("3 : kosongkan A\n");
    printf("4 : kosongkan B\n");
    printf("5 : tuang A ke B\n");
    printf("6 : tuang B ke A\n");
    printf("masukkan nomor perintah : ");
    scanf("%i", &perintah);

    do {
        if(perintah == 1){
            A = 3;
        } else if(perintah == 2){
            B = 5;
        } else if (perintah == 3){
            A = 0;
        } else if (perintah == 4){
            B = 0;
        } else if (perintah == 5){
            if (B + A <= 5 && A != 0 && B != 0 && 5-B <= A){
              A = A - (5-B);
              B = B + A + (5-B);
            }else if (B + A <= 5 && A != 0 && B != 0 && 5-B > A){
              B = A + B;
              A = 0;
            }else if(B + A <= 5 && B == 0){
                B = A;
                A = 0;
            }else if(B + A <= 5 && A == 0){
                A = A;
                B = B;
            }else{
                A = A - (5-B);
                B=5;
            }

        } else if (perintah == 6){
            if ( A + B <= 3 && A != 0 && B != 0 && 3-A <= B){
                B = B - (3-A);
                A = A + B + (3-A);
            }else if( A + B <= 3 && A != 0 && B != 0 && 3-A > B){
                A = A + B;
                B = 0;
            }else if(A + B <= 3 && A == 0){
                A = B;
                B = 0;
            }else if(A + B <= 3 && B == 0){
                A = A;
                B=B;
            }else{
                B = B-(3-A);
                A = 3;
            }
        }else{
            printf("perintah yang dimasukkan tidak tersedia\n");
        }
        printf("jumlah air di A : %i L\n",A);
        printf("jumlah air di B : %i L\n",B);
        printf("masukkan nomor perintah : ");
        scanf("%i", &perintah);
        printf("\n-------------------------\n");
        } while (A != 4 && B != 4);
        printf("jumlah air di A : %i L\n",A);
        printf("jumlah air di B : %i L\n",B);
        printf("selamat anda berhasil");
    }


