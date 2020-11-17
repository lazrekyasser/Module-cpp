#include <iostream>
#include <string>

class Atst {
	private:
		static unsigned int _xp;
	
	public:
	Atst(void) {
		std::cout<<"constr Atst"<<std::endl;
	}
	~Atst(void) {
		std::cout<<"destr Atst "<<std::endl;
	}
	//get
	unsigned int getXP(void) const {
		return this->_xp;
	}
	//set
	void 		setXP(unsigned int xp) {
		this->_xp = xp;
	}
	///
	virtual void print(void) const = 0;
	virtual void use(void) {
		std::cout<<"use Atst"<<std::endl;
		this->_xp += 10;
	}
};

unsigned int Atst::_xp = 0;

class concrete : public Atst {
	public:
		concrete(void) {
			std::cout<<"constr concret"<<std::endl;
		}
		~concrete(void) {
			std::cout<<"destr concret"<<std::endl;
		}
		virtual void print(void) const{
			std::cout<<"bla bla... concrete XP = "<<this->getXP()<<std::endl;
		}
		virtual void use(void) {
			std::cout<<"use concrete"<<std::endl;
			this->setXP(this->getXP() + 10);
		}
};
class two : public Atst {
	public:
		two(void) {
			std::cout<<"constr two"<<std::endl;
		}
		~two(void) {
			std::cout<<"destr two"<<std::endl;
		}
		virtual void print(void) const{
			std::cout<<"bla bla... two XP = "<<this->getXP()<<std::endl;
		}
		virtual void use(void) {
			std::cout<<"use two"<<std::endl;
			this->setXP(this->getXP() + 10);
		}
};

int main() {
	Atst* a = new concrete();
	Atst* b = new two();

	a->print();
	a->use();
	a->print();
	a->use();
	a->print();
	b->print();
	b->use();
	b->print();
	return 0;
}