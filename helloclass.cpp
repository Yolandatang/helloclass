#include"helloclass.h"

using namespace std

helloclass::helloclass()
{
  cout<<"Creating."<<endl;
}

helloclass::~helloclass()
{
  cout<<"Destroyed."<<endl;
}

void helloclass::sayhello()
{
  cout<<"Hello."<<endl;
}

