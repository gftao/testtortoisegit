#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

void main()
{


	//list<int> Link;
	vector<int> Link;
	int i,key,item;
	cout << "cin 10 num to List: \n";
	for (i=0;i < 10;i++)
	{
		cin>>item;
		//Link.push_front(item);
		Link.push_back(item);
	}	
	sort(Link.begin(),Link.end());

	cout << "List: ";
	vector<int>::iterator p = Link.begin();
	
	while (p!=Link.end())
	{
		cout<<*p << " ";
		p++;
	}
	cout<< endl;
#if 0
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

	char buf[]="HAPPY BRITHDAY";
	char rinbuf[10];
	cout.write(buf,10);
	cout<<"\n";

	cin.read(rinbuf,6);
	cout.write(rinbuf,cin.gcount());
#endif
	char c = 'b';
	cout <<"put char 'b' break !" <<endl;
	while (c != getchar())
	{

	}

	return ;
}