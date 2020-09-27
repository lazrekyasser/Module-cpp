#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
    private:
        int                 _pnt_fixe;
        static const int    _nbr_bit;
    public:
        Fixed(void);
        Fixed(Fixed const &f);
        ~Fixed(void);
        Fixed& operator=(Fixed const & rhs);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif