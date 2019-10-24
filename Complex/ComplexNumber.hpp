#ifndef COMPLEX_H
#define COMPLEX_H

class ComplexNumber {
public:
	ComplexNumber(double real_part_, double imaginary_part_);

	ComplexNumber();

	double GetRealPart() const;
	
	void SetRealPart(double real_part_);

	double GetImaginaryPart() const;

	void SetImaginaryPart(double imaginary_part_);

	ComplexNumber Sum(ComplexNumber other) const;

	ComplexNumber Sub(ComplexNumber other) const;

	ComplexNumber Mult(ComplexNumber other) const;

	void Print() const;

private:
	double real_part_;
	double imaginary_part_;

};

#endif
