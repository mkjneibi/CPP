#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;

    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &copy);
        const std::string getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();

        //nested class methods to define custom exception
        //types specific to Bureaucrat class
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        //what() to provide error messages when exceptions are thrown.
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
