#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("John", 50);
        std::cout << bureaucrat << std::endl;

        Form form("Form 1", 60, 40);
        std::cout << form << std::endl;

        bureaucrat.signForm(form);
        std::cout << "Form signed? " << (form.isSigned() ? "Yes" : "No") << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
