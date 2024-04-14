#include <iostream>

enum TEmploymentStatus
{
    esFullTime,
    esPartTime,
    esContractor,
    esNS
};

int main()
{
    int EmplStatus;
    std::cout << "Employee's Contract Status: ";
    std::cout << "\n0 - Full Time | 1 - Part Time"
              << "\n2 - Contractor | 3 - Other"
              << "\nStatus: ";
    std::cin >> EmplStatus;
    std::cout << std::endl;

    switch (EmplStatus)
    {
    case esFullTime:
        std::cout << "Employment Status: Full Time\n";
        std::cout << "Employee's Benefits: Medical Insurance\n"
                  << " Sick Leave\n"
                  << " Maternal Leave\n"
                  << " Vacation Time\n"
                  << " 401K\n";
        break;

    case esPartTime:
        std::cout << "Employment Status: Part Time\n";
        std::cout << "Employee's Benefits: Sick Leave\n"
                  << " Maternal Leave\n";
        break;

    case esContractor:
        std::cout << "Employment Status: Contractor\n";
        std::cout << "Employee's Benefits: None\n";
        break;

    case esNS:
        std::cout << "Employment Status: Other\n";
        std::cout << "Status Not Specified\n";
        break;

    default:
        std::cout << "Unknown Status\n";
    }

    return 0;
}
