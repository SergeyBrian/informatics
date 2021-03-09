#include <iostream>

using namespace std;

int getDate(int year, bool isCatholic) {
	if (!isCatholic) {
		int a,b,c,d,e,f;
		a = year%19;
		b = year%4;
		c = year%7;
		d = (19*a + 15) % 30;
		e = (2*b + 4*c + 6*d + 6) % 7;
		f = d + e;
		if (year < 1900)
			return (f>=9)?(22+f)*100+3:904;
		return (f<=26)?(4+f)*100+4:2605;
	}
	int a,b,c,k,p,q,M,N,d,e,res;
	a=year%19;
	b=year%4;
	c=year%7;
	k=year/100;
	p=((13+8*k)/25);
	q=k/4;
	M=(15-p+k-q)%30;
	N=(4+k-q)%7;
	d=(19*a+M)%30;
	e=(2*b+4*c+6*d+N)%7;
	res=(22+d+e<=30)?(22+d+e)*100+3:(d+e-9)*100+4;
	if(d==29&&e==6&&res==2604)res=1904;
	if(d==28&&e==5&&(11*M+11)%30<19&&res==2504)res=1804;
	return res;
}
