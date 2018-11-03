#include <iostream>

using namespace std;
class pet
{
protected:
    string name;
public:
    pet (string name )
    {
        this->name=name;
    }
    void Setname(string n)
    {
         name=n;
    }
    virtual void printDescription() = 0;
};
class cat : public pet
{
private:
    bool neuterSpayed;
public:
   //cat ()
    //{
      //   neuterSpayed=0;
    //}
   cat ( string name ,bool n ) : pet (name)
    {
         neuterSpayed=n;
    }
    void Setspayed(bool x)
    {
        neuterSpayed=x;
    }
    bool Getspayed ()
    {
      return  neuterSpayed;
    }
    void printDescription()
    {
           cout << "Cat named " << name << endl;
           cout << "Neuter/Spayed: " << neuterSpayed << endl << endl;
    }

};
class dog : public pet
{
private:
     bool neuterSpayed;
public:
    //dog ()
    //{
    //neuterSpayed = 0;
    //}
    dog ( string name ,bool s) : pet (name)
    {
        neuterSpayed= s;
    }
     void Setspayed(bool x)
    {
        neuterSpayed=x;
    }
    bool Getspayed ()
    {
      return neuterSpayed;
    }

     void printDescription()
    {
           cout << "Dog named " << name << endl;
           cout << "Neuter/Spayed: " <<neuterSpayed << endl << endl;

    }
};

class bird : public pet
{
private:
    bool talks;
public:
 bird ( string name ,bool s) : pet (name)
    {
        talks=s;
    }
     void Settalk(bool x)
    {
        talks=x;
    }
    bool Getspayed ()
    {
      return talks;
    }
    void printDescription( )
    {
           cout << "Bird named " << name << endl;
        cout << "Talks: " << talks << endl << endl;
    }

};


int main()
{
  pet *p[3];
  cat c("bosy" , 1);
  dog d("jonny " , 0);
  bird b("xxx" , 1);
  p[0] = &c ;
   p[1]= &d ;
  p[2]=&b;
  for(int i = 0;i < 3;i++)
    p[i] -> printDescription();
    return 0;
}
