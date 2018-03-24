#include <iostream>

class IOperator
{
public:
  virtual ~IOperator(void) {}
  virtual int calc(int lhs, int rhs)=0;
};

class Plus : public IOperator
{
public:
  virtual ~Plus(void) {}
  virtual int calc(int lhs, int rhs) { return lhs + rhs; }
  const char* getPlusChar(void) { return "+"; }
};

class Minus : public IOperator
{
public:
  virtual ~Minus(void) {}
  virtual int calc(int lhs, int rhs) { return lhs - rhs; }
  const char* getMinusChar(void) { return "-"; }
};

int exec(IOperator* ope, int opr1, int opr2)
{
  return ope->calc(opr1, opr2);
}

int main(void)
{
  Plus* p = new Plus();
  Minus* m = new Minus();
  std::cout << "10 " << p->getPlusChar() << " 20 = "
	    << exec(p, 10, 20) << std::endl;
  std::cout << "30 " << m->getMinusChar() << " 15 = "
	    << exec(m, 30, 15) << std::endl;

  return 0;
}
