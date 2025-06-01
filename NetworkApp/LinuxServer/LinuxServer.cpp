// LinuxServer.cpp : Defines the entry point for the application.
//

#include "LinuxServer.h"

#include <unistd.h>
#include <errno.h>

using namespace std;

int main()
{
    char host_name[1024];

    int ret_val = gethostname(host_name, sizeof(host_name));
    if (ret_val == 0)
    {
        cout << "Hostname:" << host_name << endl;
    }
    else
    {
        cout << "Error occured: " << errno << endl;
    }

    cout << "hello";

	return 0;
}
