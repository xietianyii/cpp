#ifndef __FRACITON__
#define __FRACTION__
class Fraction{
    public:
    Fraction(int num_m=0,int num_d=1):m_numerator(num_m),m_denominator(num_d){}
    operator double() const{
        return (double)(m_numerator*1.0/m_denominator);
    }
    operator int() const{
        return m_numerator/m_denominator;
    }
    int getm(){return this->m_numerator;};
    int getd(){return this->m_denominator;}
    private:
    int m_numerator;
    int m_denominator;

};
Fraction operator *(Fraction a,Fraction b)
{
    return Fraction(a.getm()*b.getm(),a.getd()*b.getd());
}
#endif