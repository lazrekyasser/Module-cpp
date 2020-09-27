#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int                 _pnt_fixe;
        static const int    _nbr_bit;
    public:
        Fixed(void);
        Fixed(Fixed const &f);
        Fixed(int const n);
        Fixed(float const f);
        ~Fixed(void);
        Fixed& operator=(Fixed const & rhs);
        bool   operator<(Fixed const & rhs) const;
        bool   operator>(Fixed const & rhs) const;
        bool   operator<=(Fixed const & rhs) const;
        bool   operator>=(Fixed const & rhs) const;
        bool   operator==(Fixed const & rhs) const;
        bool   operator!=(Fixed const & rhs) const;
        Fixed  operator+(Fixed const & rhs);
        Fixed  operator-(Fixed const & rhs);
        Fixed  operator*(Fixed const & rhs);
        Fixed  operator/(Fixed const & rhs);
        static Fixed&       min(Fixed& a, Fixed& b);
        static const Fixed& min(Fixed const & a, Fixed const & b);
        static Fixed&       max(Fixed& a, Fixed& b);
        static const Fixed& max(Fixed const & a, Fixed const & b);
        Fixed& operator++(void);//pre_inc
        Fixed  operator++(int);//post_inc
        Fixed& operator--(void);//pre_dec
        Fixed  operator--(int);//post_dec
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt(void) const;
        float toFloat(void) const;
};

std::ostream& operator<<(std::ostream& o, Fixed const & rhs);


#endif