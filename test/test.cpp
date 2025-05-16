#include <iostream>
#include "mpsim/bridge.pb.h"

int main()
{
    pb::mpsim::Response response;
    const pb::mp::TelemetryMessage& msg = response.get_sim_data().sim_telemetry();
    std::cout << msg.has_sensor_data() << std::endl;
    return 0;
}