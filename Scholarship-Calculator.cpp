// LPU Finder.cpp : Defines the entry point for the console application.

#include <iostream>

#include<fstream>

using namespace std;

class twelve

{
	protected:

	int nmark;

	//int ch;

	public:

		void mark12()

			{
				cout<<"ENTER PERCENT OF YOUR 12TH CLASS\n";

				cin>>nmark;

				int l=100;

				int b;

				int s;

				cout<<"SELECT YOUR COURCE\n";

					cout<<"1.ENGINEERING\n2.MANAGEMENT\n3.COMPUTER APPLICATION AND IT\n4.COMMERCE\n5.AGRICULTURE\n6.ECONOMICS\n7.HOTEL MANAGEMENT AND TOURISM\n8.LAW\n9.ARCHITECTURE\n10.POLITICAL SCIENCE\n11.FASHION DESIGN\n12.PSYCHOLOGY\n13.MULTIMEDIA AND ANIMATION\n14.JOUNALISM AND FILM PRODUCTION\n15.FINE ARTS\n	";

				int abc;

				cin>>abc;

				switch(abc)

				{
				case 1:

				if(nmark>=90&&(nmark<=99))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP \nYOU HAVE TO PAY ONLY RS. 30500 OUT OF RS. 95500 AS PER SEMESTER\n";

				}

				else if(nmark>=80&&(nmark<=89))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS. 49500 OUT OF RS.95500 AS PER SEMESTER\n";

				}

				else if(nmark>=70&&(nmark<=80))

				{

					cout<<"CONTRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS.63500 OUT OF 95500 AS PER SEMESTER\n";

				}

				else cout<<"SORYY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP\nYOU WILL BE PAY FULL PAYMENT AS 95500 PER SEMESTER\nTHANK YOU AS PER SEMESTER\n";

				break;

				case 2:

						if(nmark>=90&&(nmark<=90))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP \nYOU HAVE TO PAY ONLY RS. 33500 OUT OF RS.100500 AS PER SEMESTER\n";

				}

				else if(nmark>=80&&(nmark<=89))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS. 56500 OUT OF RS. 100500 AS PER SEMESTER\n";

				}

				else if(nmark>=70&&(nmark<=80))

				{

					cout<<"CONTRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS.65500 OUT OF RS.100500 AS PER SEMESTER\n";

				}

				else cout<<"SORYY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP\nYOU WILL BE PAY FULL PAYMENT AS 100500 PER SEMESTER\nTHANK YOU\n";

				break;

				case 3:

								if(nmark>=90&&(nmark<=99))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP \nYOU HAVE TO PAY ONLY RS. 33500 OUT OF RS. 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=80&&(nmark<=89))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS. 46500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=70&&(nmark<=80))

				{

					cout<<"CONTRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS.63500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else cout<<"SORYY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP\nYOU WILL BE PAY FULL PAYMENT AS 86500 PER SEMESTER\nTHANK YOU....\n";

				break;

				case 4:

										if(nmark>=90&&(nmark<=99))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP \nYOU HAVE TO PAY ONLY RS. 32500 OUT OF RS. 89500 AS PER SEMESTER\n";

				}

				else if(nmark>=80&&(nmark<=89))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS. 46500 OUT OF 89500 AS PER SEMESTER\n";

				}

				else if(nmark>=70&&(nmark<=80))

				{

					cout<<"CONTRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS.65500 OUT OF 89500 AS PER SEMESTER\n";

				}

				else cout<<"SORYY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP\nYOU WILL BE PAY FULL PAYMENT AS 89500 PER SEMESTER\nTHANK YOU....\n";

				break;

				case 5:

										if(nmark>=90&&(nmark<=99))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP \nYOU HAVE TO PAY ONLY RS. 26500 OUT OF RS. 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=80&&(nmark<=89))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS. 42500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=70&&(nmark<=80))

				{

					cout<<"CONTRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS.63500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else cout<<"SORYY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP\nYOU WILL BE PAY FULL PAYMENT AS RS.39500 PER SEMESTER\nTHANK YOU...\n";

				break;

				case 6:

										if(nmark>=90&&(nmark<=99))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP \nYOU HAVE TO PAY ONLY RS. 26500 OUT OF RS. 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=80&&(nmark<=89))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS. 42500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=70&&(nmark<=80))

				{

					cout<<"CONTRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS.63500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else cout<<"SORYY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP\nYOU WILL BE PAY FULL PAYMENT AS RS.39500 PER SEMESTER\nTHANK YOU...\n";

				break;

				case 7:

										if(nmark>=90&&(nmark<=99))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP \nYOU HAVE TO PAY ONLY RS. 26500 OUT OF RS. 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=80&&(nmark<=89))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS. 42500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=70&&(nmark<=80))

				{

					cout<<"CONTRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS.63500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else cout<<"SORYY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP\nYOU WILL BE PAY FULL PAYMENT AS RS.39500 PER SEMESTER\nTHANK YOU...\n";

				break;

				case 8:

										if(nmark>=90&&(nmark<=99))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP \nYOU HAVE TO PAY ONLY RS. 26500 OUT OF RS. 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=80&&(nmark<=89))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS. 42500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=70&&(nmark<=80))

				{

					cout<<"CONTRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS.63500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else cout<<"SORYY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP\nYOU WILL BE PAY FULL PAYMENT AS RS.39500 PER SEMESTER\nTHANK YOU...\n";

				break;

				case 9:

										if(nmark>=90&&(nmark<=99))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP \nYOU HAVE TO PAY ONLY RS. 26500 OUT OF RS. 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=80&&(nmark<=89))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS. 42500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=70&&(nmark<=80))

				{

					cout<<"CONTRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS.63500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else cout<<"SORYY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP\nYOU WILL BE PAY FULL PAYMENT AS RS.39500 PER SEMESTER\nTHANK YOU...\n";

				break;

				case 10:

										if(nmark>=90&&(nmark<=99))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP \nYOU HAVE TO PAY ONLY RS. 26500 OUT OF RS. 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=80&&(nmark<=89))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS. 42500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=70&&(nmark<=80))

				{

					cout<<"CONTRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS.63500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else cout<<"SORYY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP\nYOU WILL BE PAY FULL PAYMENT AS RS.39500 PER SEMESTER\nTHANK YOU...\n";

				break;

				case 11:

										if(nmark>=90&&(nmark<=99))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP \nYOU HAVE TO PAY ONLY RS. 26500 OUT OF RS. 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=80&&(nmark<=89))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS. 42500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=70&&(nmark<=80))

				{

					cout<<"CONTRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS.63500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else cout<<"SORYY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP\nYOU WILL BE PAY FULL PAYMENT AS RS.39500 PER SEMESTER\nTHANK YOU...\n";

				break;

				case 12:

										if(nmark>=90&&(nmark<=99))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP \nYOU HAVE TO PAY ONLY RS. 26500 OUT OF RS. 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=80&&(nmark<=89))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS. 42500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=70&&(nmark<=80))

				{

					cout<<"CONTRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS.63500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else cout<<"SORYY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP\nYOU WILL BE PAY FULL PAYMENT AS RS.39500 PER SEMESTER\nTHANK YOU...\n";

				break;

				case 13:

										if(nmark>=90&&(nmark<=99))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP \nYOU HAVE TO PAY ONLY RS. 26500 OUT OF RS. 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=80&&(nmark<=89))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS. 42500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=70&&(nmark<=80))

				{

					cout<<"CONTRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS.63500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else cout<<"SORYY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP\nYOU WILL BE PAY FULL PAYMENT AS RS.39500 PER SEMESTER\nTHANK YOU...\n";

				break;

				case 14:

										if(nmark>=90&&(nmark<=99))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP \nYOU HAVE TO PAY ONLY RS. 26500 OUT OF RS. 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=80&&(nmark<=89))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS. 42500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=70&&(nmark<=80))

				{

					cout<<"CONTRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS.63500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else cout<<"SORYY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP\nYOU WILL BE PAY FULL PAYMENT AS RS.39500 PER SEMESTER\nTHANK YOU...\n";

				break;

				case 15:

										if(nmark>=90&&(nmark<=99))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP \nYOU HAVE TO PAY ONLY RS. 26500 OUT OF RS. 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=80&&(nmark<=89))

				{

					cout<<"CONGRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS. 42500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else if(nmark>=70&&(nmark<=80))

				{

					cout<<"CONTRATS...........YOU YOU ARE ABLE TO GET SCHOLARSHIP\nYOU HAVE TO PAY ONLY RS.63500 OUT OF 86500 AS PER SEMESTER\n";

				}

				else cout<<"SORYY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP\nYOU WILL BE PAY FULL PAYMENT AS RS.39500 PER SEMESTER\nTHANK YOU...\n";

				break;

		}

		}

		void nest12()

		{

			int mark,m, choice;

		cout<<"ENTER YOUR LPUTEST MARK OUT OF 90\n";

			cin>>m;

					int l=100;

			int k=100;

			 mark=(m*l)/k;

				char p;

				cout<<"SELECT YOUR COURSE SCHEME\n";

					cout<<"1.ENGINEERING\n2.MANAGEMENT\n3.COMPUTER APPLICATION AND IT\n4.COMMERCE\n5.AGRICULTURE\n6.ECONOMICS\n7.HOTEL MANAGEMENT AND TOURISM\n8.LAW\n9.ARCHITECTURE\n10.POLITICAL SCIENCE\n11.FASHION DESIGN\n12.PSYCHOLOGY\n13.MULTIMEDIA AND ANIMATION\n14.JOUNALISM AND FILM PRODUCTION\n15.FINE ARTS\n	";

			cin>>choice;

			switch(choice)

			{



				case 1:

					if(mark>=80&&(mark<=89))

					{

						cout<<"CONGRATS......YOU HAVE SELECTED ON TOP 10 % LIST\nYOU HAVE TO PAY ONLY RS.24500 OUT OF 89500 AS PER SEMESTER\n";

					}

					else if(mark>=70&&(mark<=80))

					{

						cout<<"CONGRATS......YOU HAVE SELECTED LIST ON TOP 11 TO 21 %\nYOU HAVE TO PAY ONLY RS.41500 OUT OF RS.89500 AS PER SEMESTER\n";

					}

					else if(mark>=60&&(mark<=70))

					{

						cout<<"CONGRATS......YOU HAVE SELECTED LIST ON TOP 21 TO 35 %\nYOU HAVE TO PAY ONLY RS.63500 OUT OF RS.89500 AS PER SEMESTER\n";

					}

					else cout<<"SORRY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP AND YOU WILL BE PAY FULL PAYMENT AS 89500 PER SEMESTER\nTHANK YOU....\n";

					break;

					case 2:

							if(mark>=80&&(mark<=89))

					{

						cout<<"CONGRATS......YOU HAVE SELECTED ON TOP 10 % LIST\nYOU HAVE TO PAY ONLY RS.25500 OUT OF 86500 AS PER SEMESTER\n";

					}

					else if(mark>=70&&(mark<=80))

					{

						cout<<"CONGRATS......YOU HAVE SELECTED LIST ON TOP 11 TO 21 %\nYOU HAVE TO PAY ONLY RS.44500 OUT OF RS.86500 AS PER SEMESTER\n";

					}

					else if(mark>=60&&(mark<=70))

					{

						cout<<"CONGRATS......YOU HAVE SELECTED LIST ON TOP 21 TO 35 %\nYOU HAVE TO PAY ONLY RS.61500 OUT OF RS.86500 AS PER SEMESTER\n";

					}

					else cout<<"SORRY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP AND YOU WILL BE PAY FULL PAYMENT AS RS.86500 AS PER SEMESTER\nTHANK YOU...\n";

					break;

					case 3:

							if(mark>=80&&(mark<=89))

					{

						cout<<"CONGRATS......YOU HAVE SELECTED ON TOP 10 % LIST\nYOU HAVE TO PAY ONLY RS.35500 OUT OF 95000 AS PER SEMESTER\n";

					}

					else if(mark>=70&&(mark<=80))

					{

						cout<<"CONGRATS......YOU HAVE SELECTED LIST ON TOP 11 TO 21 %\nYOU HAVE TO PAY ONLY RS. 56500 OUT OF RS.95500 AS PER SEMESTER\n";

					}

					else if(mark>=60&&(mark<=70))

					{

						cout<<"CONGRATS......YOU HAVE SELECTED LIST ON TOP 21 TO 35 %\nYOU HAVE TO PAY ONLY RS.65500 OUT OF RS.95500 AS PER SEMESTER\n";

					}

					else cout<<"SORRY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP YOU WILL PAY FULL PAYMENT AS 99500 PER SEMESTER\nTHANK YOU.....\n";

					break;

					case 4:

							if(mark>=80&&(mark<=89))

					{

						cout<<"CONGRATS......YOU HAVE SELECTED ON TOP 10 % LIST\nYOU HAVE TO PAY ONLY RS.19500 OUT OF 86500\n";

					}

					else if(mark>=70&&(mark<=80))

					{

						cout<<"CONGRATS......YOU HAVE SELECTED LIST ON TOP 11 TO 21 %\nYOU HAVE TO PAY ONLY RS.49500 OUT OF RS.869500 AS PER SEMESTER\n";

					}

					else if(mark>=60&&(mark<=70))

					{

						cout<<"CONGRATS......YOU HAVE SELECTED LIST ON TOP 21 TO 35 %\nYOU HAVE TO PAY ONLY RS.63500 OUT OF RS.86500 AS PER SEMESTER\n";

					}

					else cout<<"SORRY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP AND YOU HAVE TO PAY FULL PAYMENT AS 86500 PER SEMESTER\nTHANK YOU.....\n";

					break;

					case 5:

							if(mark>=80&&(mark<=89))

					{

						cout<<"CONGRATS......YOU HAVE SELECTED ON TOP 10 % LIST\nYOU HAVE TO PAY ONLY RS.24500 OUT OF 89500 AS PER SEMESTER\n";

					}

					else if(mark>=70&&(mark<=80))

					{

						cout<<"CONGRATS......YOU HAVE SELECTED LIST ON TOP 11 TO 21 %\nYOU HAVE TO PAY ONLY RS.41500 OUT OF RS.89500 AS PER SEMESTER\n";

					}

					else if(mark>=60&&(mark<=70))

					{

						cout<<"CONGRATS......YOU HAVE SELECTED LIST ON TOP 21 TO 35 %\nYOU HAVE TO PAY ONLY RS.67500 OUT OF RS.89500 AS PER SEMESTER\n";

					}

					else cout<<"SORRY YOU ARE NOT ABLE TO GET ANY SCHOLARSHIP AND YOU HAVE TO PAY FULL PAYMENT AS 89500 AS PER SEMESTER\nTHANK YOU....\n";

					break;



					default:cout<<"WRONG INPUT \n";



				}

		}

};

class login:public twelve

{
private:

	char user[10];

	int password;

	int n;

	int match;

public:

	void check()

	{

		cout << "Press 1 for log-in\nPress 2 for sign-up\n";

		cin >> n;

		switch (n)

		{

		case 1:

			log();

			break;

		case 2:

			sign();

			break;

		}

	}



	void sign()

	{

		cout << "create your user name\n";

		cin >> user;

		ofstream out;

		out.open(user);

		cout << "create your password\n";

		cin >> password;

		out << password;

		out.close();

		check();



	}

	void log()

	{

		cout << "Enter your user id\n";

		cin >> user;

		ifstream in;

		in.open(user);

		in >> match;

		cout << "Enter your password\n";

		cin >> password;

		if (password == match)

		{

			cout << "WELCOME TO LPU SCHOLARSHIP\n";

			int a;

			cout<<"Enter your scholarship basis\n";

			cout<<"1-basis of 12th\n";

			cout<<"2-basis of lpu-nest\n";

			cin>>a;

			switch(a)

			{

				case 1:

				mark12();

				break;

				case 2:

				nest12();

				break;


			}


		}

		else

		{

			cout << "PASSWORD WRONG PLEASE TRY AGAIN\n";

			log();

		}

	}

};


 int main()

{

	 login z;

	 z.check();

    return 0;

}

