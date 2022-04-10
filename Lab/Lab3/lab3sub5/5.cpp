#include <iostream>

using namespace std;

class cricketeam{
      string name[5];
      int runsMade[5];
      int no_of_fours[5];
      int no_of_sixes[5];

  public:
     void getValues(){
         int i;
     for (i= 0;i<5;i++){
      cout<<"Enter the name of the batsman"<<endl;
      cin>>name[i];
      cout<<"Enter runs made by the batsman"<<endl;
      cin>>runsMade[i];
      cout<<"Enter the number of fours hit:"<<endl;
      cin>>no_of_fours[i];
      cout<<"Enter the number of sizes hit"<<endl;
      cin>>no_of_sixes[i];
     }
     }
      /*void setValues(){
          for (i=0;i<5;i++){
      this ->name[i]= name[i];
      this ->runsMade[i] = runsMade[i];
      this ->no_of_fours[i] = no_of_fours[i];
      this ->no_of_sixes[i] = no_of_sixes[i];
      }
      }*/
      void displayinfo(){
           for(int i=0;i<5;i++){
    cout<<"Name =  "<<name[i];
    cout<<"\tRuns made = "<<runsMade[i];
    cout<<"\tNumber of fours = "<<no_of_fours[i];
    cout<<"\tNumber of sixes = "<<no_of_sixes[i];
    cout<<endl;
    }
      }
};
int main()
{
    cricketeam c;

    c.getValues();
    c.displayinfo();
    return 0;
}
