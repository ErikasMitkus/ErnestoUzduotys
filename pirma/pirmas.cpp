#include <iostream>
#include <fstream>
using namespace std;
int main()
{
int i, n, didziausias_sk, maziausias_sk;
ifstream fd("pirmas");
i=0;n=0;
int mas[100];
while(!fd.eof()){
    fd >> mas[i];
    i=i+1;
    }
n=i;
fd.close();
for(i=0;i<=n-1;i++){
    if(i==0){
        didziausias_sk=mas[i];
        maziausias_sk=mas[i];}
    else if(mas[i]>didziausias_sk){
            didziausias_sk=mas[i];}
         if(mas[i]<maziausias_sk){
            maziausias_sk=mas[i];}
}
ofstream fr("pirmas");
fr << "min " << maziausias_sk << endl;
fr << "max " << didziausias_sk << endl;
fr.close();
return 0;
}
