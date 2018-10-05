#ifndef LAMP_H
#define LAMP_H


class Lamp
	{
		unsigned long long int m_xn;
		unsigned long long int m_xm;
		int m_trw;
		int m_bgn;
		int m_end;
	public:
		Lamp(unsigned long long int i_xn, unsigned long long int i_xm, int i_trw, int i_bgn, int i_end);
		Lamp();
		unsigned long long int input_data(void);

	};

#endif // LAMP_H



