#include <stdio.h>
#include <conio.h>
int main(){
  
     FILE *fp,*fp1,*fp2,*fp3,*fp4,*fp5,*fp6,*fp7,*fp8;
     FILE *fpw,*fpw1,*fpw2,*fpw3,*fpw4,*fpw5,*fpw6,*fpw7,*fpw8; 
    float a[9],b[9],c[9],d[9],e[9],f[9],g[9];
      fp= fopen ("D:\\luan van thac sy\\Data_LuanVan_ThacSi_2021\\MgO-SiO2_1_8_2500K\\X1\\hpbxt.dat","r");
      fp1= fopen("D:\\luan van thac sy\\Data_LuanVan_ThacSi_2021\\MgO-SiO2_1_8_2500K\\X2\\hpbxt.dat","r");
      fp2= fopen("D:\\luan van thac sy\\Data_LuanVan_ThacSi_2021\\MgO-SiO2_1_8_2500K\\X3\\hpbxt.dat","r");
      fp3= fopen("D:\\luan van thac sy\\Data_LuanVan_ThacSi_2021\\MgO-SiO2_1_8_2500K\\X4\\hpbxt.dat","r");
      fp4= fopen("D:\\luan van thac sy\\Data_LuanVan_ThacSi_2021\\MgO-SiO2_1_8_2500K\\X5\\hpbxt.dat","r");
      fp5= fopen("D:\\luan van thac sy\\Data_LuanVan_ThacSi_2021\\MgO-SiO2_1_8_2500K\\X6\\hpbxt.dat","r");
      fp6= fopen("D:\\luan van thac sy\\Data_LuanVan_ThacSi_2021\\MgO-SiO2_1_8_2500K\\X7\\hpbxt.dat","r");
      fp7= fopen("D:\\luan van thac sy\\Data_LuanVan_ThacSi_2021\\MgO-SiO2_1_8_2500K\\X8\\hpbxt.dat","r");
      fpw=fopen ("D:\\luan van thac sy\\Data_LuanVan_ThacSi_2021\\MgO-SiO2_1_8_2500K\\Si-Si.dat","w");
      fpw1=fopen("D:\\luan van thac sy\\Data_LuanVan_ThacSi_2021\\MgO-SiO2_1_8_2500K\\Si-O.dat","w");
      fpw2=fopen("D:\\luan van thac sy\\Data_LuanVan_ThacSi_2021\\MgO-SiO2_1_8_2500K\\O-O.dat","w");
      fpw3=fopen("D:\\luan van thac sy\\Data_LuanVan_ThacSi_2021\\MgO-SiO2_1_8_2500K\\Si-Mg.dat","w");
      fpw4=fopen("D:\\luan van thac sy\\Data_LuanVan_ThacSi_2021\\MgO-SiO2_1_8_2500K\\O-Mg.dat","w");
      fpw5=fopen("D:\\luan van thac sy\\Data_LuanVan_ThacSi_2021\\MgO-SiO2_1_8_2500K\\Mg-Mg.dat","w");

     while(fscanf(fp,"%f\t%f\t%f\t%f\t%f\t%f\t%f\n",&a[0],&b[0],&c[0],&d[0],&e[0],&f[0],&g[0])!= 0){
                //doc file
                fscanf(fp1,"%f\t%f\t%f\t%f\t%f\t%f\t%f\n",&a[1],&b[1],&c[1],&d[1],&e[1],&f[1],&g[1]);
                fscanf(fp2,"%f\t%f\t%f\t%f\t%f\t%f\t%f\n",&a[2],&b[2],&c[2],&d[2],&e[2],&f[2],&g[2]);
                fscanf(fp3,"%f\t%f\t%f\t%f\t%f\t%f\t%f\n",&a[3],&b[3],&c[3],&d[3],&e[3],&f[3],&g[3]);
                fscanf(fp4,"%f\t%f\t%f\t%f\t%f\t%f\t%f\n",&a[4],&b[4],&c[4],&d[4],&e[4],&f[4],&g[4]);
                fscanf(fp5,"%f\t%f\t%f\t%f\t%f\t%f\t%f\n",&a[5],&b[5],&c[5],&d[5],&e[5],&f[5],&g[5]);
                fscanf(fp6,"%f\t%f\t%f\t%f\t%f\t%f\t%f\n",&a[6],&b[6],&c[6],&d[6],&e[6],&f[6],&g[6]);
                fscanf(fp7,"%f\t%f\t%f\t%f\t%f\t%f\t%f\n",&a[7],&b[7],&c[7],&d[7],&e[7],&f[7],&g[7]);
                //ghi file
                fprintf(fpw,"%f\t%f\t%f\t%f\t%f\t%f\t%f\n",a[0],b[0],b[1],b[2],b[3],b[4],b[5],b[6],b[7]);
                fprintf(fpw1,"%f\t%f\t%f\t%f\t%f\t%f\t%f\n",a[0],c[0],c[1],c[2],c[3],c[4],c[5],c[6],c[7]);
                fprintf(fpw2,"%f\t%f\t%f\t%f\t%f\t%f\t%f\n",a[0],d[0],d[1],d[2],d[3],d[4],d[5],d[6],d[7]);
                fprintf(fpw3,"%f\t%f\t%f\t%f\t%f\t%f\t%f\n",a[0],e[0],e[1],e[2],e[3],e[4],e[5],e[6],e[7]);
                fprintf(fpw4,"%f\t%f\t%f\t%f\t%f\t%f\t%f\n",a[0],f[0],f[1],f[2],f[3],f[4],f[5],f[6],f[7]);
                fprintf(fpw5,"%f\t%f\t%f\t%f\t%f\t%f\t%f\n",a[0],g[0],g[1],g[2],g[3],g[4],g[5],g[6],g[7]);
                
     }
     // fclose)
    
    
     return 0;
}