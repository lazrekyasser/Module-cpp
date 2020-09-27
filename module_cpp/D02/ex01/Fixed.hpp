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
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt(void) const;
        float toFloat(void) const;
};

std::ostream& operator<<(std::ostream& o, Fixed const & rhs);


#endif