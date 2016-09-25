#include <iostream>
#include <list>
using namespace std;

void main()
{
#if 0

	list<int> Link;
	int i,key,item;
	for (i=0;i < 10;i++)
	{
		cin>>item;
		Link.push_front(item);
	}
	cout << "List: ";
	list<int>::iterator p = Link.begin();
	
	while (p!=Link.end())
	{
		cout<<*p << " ";
		p++;
	}
	cout << endl;
	cin >>key;

	Link.remove(key);
	cout<<"List: ";
	p=Link.begin();
	while (p!=Link.end())
	{
		cout<< *p << " " ;
		p++;
	}
	cout<<endl;
#endif	

	char buf[]="HAPPY BRITHDAY";
	char rinbuf[10];
	cout.write(buf,10);
	cout<<"\n";
	cin.read(rinbuf,6);
	cout.write(rinbuf,cin.gcount());

	getchar();

	return ;
}