/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:12:16 by orezek            #+#    #+#             */
/*   Updated: 2024/12/10 22:57:51 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat &operator=(const Bureaucrat &obj);
	~Bureaucrat();
	int getGrade(void) const;
	const std::string getName(void) const;
	void incrementGrade(void);
	void decrementGrade(void);
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		// exception specification does not throw any exception
			virtual const char *what() const throw();
	};

private:
	const std::string name;
	int grade;
};

std::ostream &operator<<(std::ostream &outputStream, const Bureaucrat &bureaucrat);
