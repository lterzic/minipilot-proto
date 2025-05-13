#include <iostream>
#include "mpsim/bridge.pb.h"

int main()
{
    mpsim::pb::ResponseGetSimData get_sim_data;
    const mp::pb::TelemetryMessage& msg = get_sim_data.sim_data();
    std::cout << msg.has_sensor_data() << std::endl;
    return 0;
}