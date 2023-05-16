#include "UserInterface.hpp"

namespace FindIt
{
    UserInterface::UserInterface(Get_objects_t functionPointer, Request_object_t functionpointer2)
            : ReturnUniqueObjectsTypes(functionPointer), RequestObject(functionpointer2)
    {

    }

    UserInterface::~UserInterface()
    {

    }
    
    void UserInterface::PrintStartUp(int *choice)
    {
        std::cout << "Welcome to the FindIt Server UI, please select your choice:\n";
        std::cout << "1. Show all knwon object types\n";
        std::cout << "2. Request/search up objects\n";  //think about eventual exceptions
        std::cout << "3. Quit application";
        std::cin >> *choice;
    }

    void UserInterface::Run()
    {
        int choice = 0;
        std::string requestedObject;
        running = true;
        while(running)
        {
            PrintStartUp(&choice);
            switch (choice)
            {
            case 1:
                std::cout << "All types:\n";
                for(auto type : ReturnUniqueObjectsTypes())
                {
                    std::cout << type + "\n";
                }
                break;

            case 2:
                std::cout << "Type in the object you would like to request";
                std::cin >> requestedObject;
                RequestObject(requestedObject);
                break;
                
            case 3:
                std::cout << "quitting";
                UserInterface::Stop();
                break;

            default:
                std::cout << "something went wrong";
                break;
            }
        }
        std::cout << "closed";
    }

    void UserInterface::Stop()
    {
        std::cout << "self destruct sequence started in 10 seconds\n";
        running = false;
        //kill thread and shut everything down?
    }
};