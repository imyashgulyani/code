#include <iostream>
using namespace std;
class member
{
	private:
		string name;
		int id;
};
class studentmember:public member
{
	private:
		static int bookissued;
	void issuedbook()
	{
		bookissued++;
	}
	public:
		void issuebook()
		{
			cout<<"student has issued book"<<bookissued;
			issuedbook();
		}
};
int studentmember::bookissued=1;
class librarian:protected studentmember
{
	private:
		static int bookmanaged;
	void addbook()
	{
		bookmanaged++;
	}
	public:
		void manage()
		{
			addbook();
			issuebook();
		}
};
int librarian::bookmanaged=1;
class headlibrarian:private librarian
{
	public:
		showprivileges()
	    {
		    cout<<"special access granted";
		    manage();
		    
	    }
};
int main()
{
//	studentmember s1;
//	s1.issuebook();
	headlibrarian h1,h2,h3;
	h1.showprivileges();
	h2.showprivileges();
	h3.showprivileges();
//	cout<<"number of book issued are : "<<studentmember::;
//	cout<<"number of books added are : "<<librarian::addbook();
}
