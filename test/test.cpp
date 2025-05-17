#include <iostream>
#include "mpsim/bridge.pb.h"

int main()
{
    pb::mpsim::Response response;
    const pb::mp::Telemetry& msg = response.get_sim_data().sim_telemetry();
    std::cout << msg.has_sensors() << std::endl;
    return 0;
}