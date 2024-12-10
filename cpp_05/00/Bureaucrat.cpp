#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(MIN_GRADE) {}
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < MAX_GRADE)
	{
		throw(Bureaucrat::GradeTooHighException());
	}
	if (grade > MIN_GRADE)
	{
		throw(Bureaucrat::GradeTooLowException());
	}
	this->grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name), grade(obj.grade) {}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
	{
		this->grade = obj.grade;
	}
	return (*this);
}
Bureaucrat::~Bureaucrat() {}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

const std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

void Bureaucrat::incrementGrade(void)
{
	if (this->grade - 1 < MAX_GRADE)
	{
		throw(Bureaucrat::GradeTooHighException());
	}
	this->grade--;
}
void Bureaucrat::decrementGrade(void)
{
	if (this->grade + 1 > MIN_GRADE)
	{
		throw(Bureaucrat::GradeTooLowException());
	}
	this->grade++;
}

std::ostream &operator<<(std::ostream &outputStream, const Bureaucrat &bureaucrat)
{
	outputStream << "'" << bureaucrat.getName() << "', bureaucrat grade " << bureaucrat.getGrade();
	return (outputStream);
}

// exception specification does not throw any exception
const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high! You’re already the Supreme Overlord of Bureaucracy, no need to go higher!");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low! Even a snail with a stamp has a higher rank than this!");
}

