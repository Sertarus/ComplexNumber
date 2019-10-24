#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;

ComplexNumber::ComplexNumber(double real_part_, double imaginary_part_) {
	this->real_part_ = real_part_;
	this->imaginary_part_ = imaginary_part_;
}

ComplexNumber::ComplexNumber() {
	this->real_part_ = 0.0;
	this->imaginary_part_ = 0.0;
}

double ComplexNumber::GetRealPart() const {
	return this->real_part_;
}

void ComplexNumber::SetRealPart(double real_part_) {
	this->real_part_ = real_part_;
}

double ComplexNumber::GetImaginaryPart() const {
	return this->imaginary_part_;
}

void ComplexNumber::SetImaginaryPart(double imaginary_part_) {
	this->imaginary_part_ = imaginary_part_;
}

ComplexNumber ComplexNumber::Sum(ComplexNumber other) const {
	return ComplexNumber(this->real_part_ + other.real_part_, this->imaginary_part_ + other.imaginary_part_);
}

ComplexNumber ComplexNumber::Sub(ComplexNumber other) const {
	return ComplexNumber(this->real_part_ - other.real_part_, this->imaginary_part_ - other.imaginary_part_);
}

ComplexNumber ComplexNumber::Mult(ComplexNumber other) const {
	double new_real_part = this->real_part_ * other.real_part_ - this->imaginary_part_ * other.imaginary_part_;
	double new_imaginary_part = this->real_part_ * other.imaginary_part_ + this->imaginary_part_ * other.real_part_;
	return ComplexNumber(new_real_part, new_imaginary_part);
}

void ComplexNumber::Print() const {
	cout << "(" << this->real_part_ << ", " << this->imaginary_part_ << ")" << endl;
}