/*
Design Object Oriented application which performs operations on
Array
Design one class Array which provides all features to manipulate array.
Design another class ArraySearch which inherited from Array class. Provide
all searching features for array.*/
#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
typedef int BOOL;
class Array
{
protected:
 int *arr;
 int length;

public:
 Array(int size = 10)
 {
 cout<<"Inside default"<<"\n";
 length = size;
 arr = new int[length];
 }

 Array(Array &);
 ~Array();

 void Accept();
 void Display();

 inline void GetData(int, int);
 inline int SetData(int);

 inline int GetLength();
};
class ArraySearch : public Array
{
 public :
 ArraySearch(int size = 10) : Array(size)
 {
 }

 int SearchFirst(int);
 int SearchLast(int);
 int Frequency(int);
};
int ArraySearch::SearchFirst(int data)
{
 int i = 0;
 for(i = 0; i< this->length; i++)
 {
 if(this->arr[i] == data)
 {
 break;
 }
 }

 if(i == this->length)
 {
 return -1;
 }
 else
 {
 return i;
 }
}
int ArraySearch::SearchLast(int data)
{
 int i = 0;
 for(i = (this->length)-1; i>=0; i--)
 {
 if(this->arr[i] == data)
 {
 break;
 }
 }

 return i;
}
int ArraySearch::Frequency(int data)
{
 int i = 0;
 int iCnt = 0;

 for(i = 0; i< this->length; i++)
 {
 if(this->arr[i] == data)
 {
 iCnt++;
 }
 }

 return iCnt;
}
Array::Array(Array &ref)
{
 cout<<"Inside Copy"<<"\n";

 this->length = ref.length;
 this->arr = new int[length];

 for(int i=0;i< this->length; i++)
 {
 this->arr[i] = ref.arr[i];
 }
}
Array::~Array()
{
 cout<<"Inside destructor"<<"\n";
 if(arr != NULL)
 {
 delete []arr;
 }
}
void Array::Accept()
{
 cout<<"Please enter the elements"<<"\n";

 for(int i = 0; i< this->length; i++)
 {
 cout<<"Enter element : "<<i+1<<"\n";
 cin>>this->arr[i];
 }
}
void Array::Display()
{
 cout<<"Elements of array are : "<<"\n";
 for(int i = 0; i< this->length; i++)
 {
 cout<<this->arr[i]<<"\t";
 }
 cout<<"\n";
}

void Array::GetData(int index, int data)
{
 if((index >= length) || (index < 0))
 {
 return;
 }
 else
 {
 this->arr[index] = data;
 }
}
int Array::SetData(int index)
{
 if((index >= length) || (index < 0))
 {
 return -1;
 }
 else
 {
 return(this->arr[index]);
 }
}
int Array::GetLength()
{
 return(this->length);
}
int main()
{
	Array obj1;
int size = 0;

 cout<<"Enter the size of array";
 cin>>size;

 Array *ptr = new Array(size);

 ptr->Accept();
 ptr->Display();

 cout<<"Enter the index to get the value\n";
 int index = 0;
 cin>>index;

 cout<<ptr->SetData(index);

 cout<<"Enter the index set the value\n";
 cin>>index;

 cout<<"Enter the value\n";
 int value;
 cin>>value;

 ptr->GetData(index,value);

 ptr->Display();

 delete ptr;

 Array obj2(obj1);
 Array obj3 = obj1;
 Array obj4;
 obj4 = obj2;
 ArraySearch obj5(6);

 obj5.Accept();

 cout<<"Enter the element to search\n";
 int no = 0;
 cin>>no;

 cout<<"First occurrence at "<<obj5.SearchFirst(no)<<"\n";

 cout<<"Frequency is "<<obj5.Frequency(no)<<"\n";

 cout<<"Last occurrence at "<<obj5.SearchLast(no)<<"\n";

 return 0;
}