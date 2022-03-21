#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Name_pairs
{
 private:
  string name;
  double age;
  int size;
  vector<string> names;
  vector<double> ages;
  
public:
  void read_names()
  {
   int s;
    cout<<"how many names do you want to input: ";
    cin>>s;
    this->size = s;
    names(s);
    
    for(int i =0; i < size; i++)
    {
      cout<<"input name: "<<i<<": ";
      cin>>names[i];
    }
  }
  
  void read_ages()
  {
   cout<<"you have "<<size<<" names so you will input "<<size<<" ages for each one\n";
   for(int i =0; i < size; i++)
   {
    cout<<names[i]<<" age: ";
    cin>>ages[i];
   }
  }
  
  void print()
  {
   for(int i  =0; i < size; i++)
   {
    cout<<names[i]<<" "<<ages[i]<<endl; 
   }
  }
  
}


int main()
{
 
  Name_pairs np;
  np.read_names();
  np.read_ages();
  np.print();
  
  return 0;
}



