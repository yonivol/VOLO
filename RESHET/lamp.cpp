#include <iostream>
#include <fstream>
#include <string>

#include "lamp.h"

using namespace std;

Lamp::Lamp(unsigned long long int i_xn, unsigned long long int i_xm, int i_trw, int i_bgn, int i_end): m_xn(i_xn=1), m_xm(i_xm=1), m_trw(i_trw=1), m_bgn(i_bgn=1), m_end(i_end=1)
	{

	}

Lamp::Lamp()
	{

	}


unsigned long long int Lamp::input_data(void)
	{
		string fst;
		unsigned long long int s_mtx=0;
		unsigned long long int rez=0;
		int cnt=1;
//-----------------
//open file init.txt
//-----------------
		ifstream f_read("init.txt", ios::ios_base::in);
		if (f_read.is_open ())
			{
				while(!f_read.eof ())
					{
						getline(f_read, fst, '\n');
						if (cnt==1)
							{
m_xn  = static_cast<unsigned long long int>(stoi(fst));
m_xm  = static_cast<unsigned long long int>(stoi(fst.erase (0,2)));
							m_trw = stoi(fst.erase (0,2));
							s_mtx = (m_xn*m_xm);
							rez = s_mtx;
							++cnt;
							}
						else if (cnt>1 && cnt<=m_trw+1)
							{
								m_bgn = stoi(fst.erase (0,2));
								m_end = stoi (fst.erase (0,2));
								rez  -= static_cast<unsigned long long int>(m_end-m_bgn+1);
								++cnt;
								if (cnt>m_trw+1) break;
							}
						else
							{
								cout<<"error...";
								break;
							}
					}

			}
			else
				{
					cout << "File not open to read!" << endl;
				}
		f_read.close ();


//-----------------
//write file rez.txt
//-----------------
		std::ofstream f_rez("rez.txt", ios::trunc);
		if(f_rez.is_open ())
			{
		f_rez<<rez;
		f_rez.close ();
			}
		else
			{
				cout << "File is not open!" << endl;
				return  0;
			}

		return rez;
	}


