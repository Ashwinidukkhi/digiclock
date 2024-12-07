  #include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
int main(){
   int hour,min,sec;
   cout<<setw(70)<<"enter current time : "<<endl;

   cout<<"hour :";
   cin>>hour;
    cout<<"min :";
   cin>>min;
    cout<<"sec:";
   cin>>sec;
   if (hour>23){
    cout<<"wrong input";
   }
  else if(min>60)
   {
    cout<<"wrong input";
   }
   else if(sec>60){
    cout<<"wrong input";
   }
   else {
    while(1){
        for(hour;hour<24;hour++)
        {
            for(min;min<60;min++)
            {
                for(sec;sec<60;sec++){
                    system("cls");
                    cout<<"               Current Time            "
                    <<hour<<"hr"<<":"<<min<<"min"<<":"<<sec<<"sec"<<endl;
     Sleep(1000); 
                }
                sec =0;
            }
            min =0;
        }
    }
}
return 0;
}
