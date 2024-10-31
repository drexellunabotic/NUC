/*
Author      Date        Description
K Nguyen    2-3-2024    - Rename configure to on_init and change return type to CallbackReturn
                        - If using BaseInterface as base class then you should remove it.
                        hardware_interface::BaseInterface<hardware_interface::[Actuator|Sensor|System]Interface>
                        to
                        hardware_interface::[Actuator|Sensor|System]Interface

                        - Removed include of headers base_interface.hpp and hardware_interface_status_values.hpp
                        -Renamed start() to on_activate(const rclcpp_lifecycle::State & previous_state) 
                            and stop() to on_deactivate(const rclcpp_lifecycle::State & previous_state)
                        - Change return type of on_activate and on_deactivate to CallbackReturn-
                        Add include of header rclcpp_lifecycle/state.hpp although this may not be strictly necessary
            2-5-2024    -Changed read/write() to read/write(const rclcpp::Time & time, const rclcpp::Duration & period)

                        */

#ifndef ROS_PHOENIX_PHOENIX_BRIDGE
#define ROS_PHOENIX_PHOENIX_BRIDGE

#include <thread>

#include "ros_phoenix/msg/motor_control.hpp"
#include "ros_phoenix/msg/motor_status.hpp"

// #include "hardware_interface/base_interface.hpp"
#include "hardware_interface/system_interface.hpp"

#include "rclcpp/logger.hpp"
#include "rclcpp/macros.hpp"
#include "rclcpp/rclcpp.hpp"

#include "rclcpp_lifecycle/state.hpp"
namespace ros_phoenix {

class PhoenixBridge
    // : public hardware_interface::BaseInterface<hardware_interface::SystemInterface> {
    : public hardware_interface::SystemInterface {

public:
    RCLCPP_SHARED_PTR_DEFINITIONS(PhoenixBridge)

    PhoenixBridge();

    PhoenixBridge(PhoenixBridge&& other) = default;

    ~PhoenixBridge() = default;

    // hardware_interface::return_type configure(const hardware_interface::HardwareInfo& info);
    hardware_interface::CallbackReturn on_init(const hardware_interface::HardwareInfo& info);

    std::vector<hardware_interface::StateInterface> export_state_interfaces();

    std::vector<hardware_interface::CommandInterface> export_command_interfaces();

    // hardware_interface::return_type start();
    hardware_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State & previous_state);

    // hardware_interface::return_type stop();
    hardware_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State & previous_state);

    // hardware_interface::return_type read();
    hardware_interface::return_type read(const rclcpp::Time & time, const rclcpp::Duration & period);

    // hardware_interface::return_type write();
    hardware_interface::return_type write(const rclcpp::Time & time, const rclcpp::Duration & period);

private:
    enum InterfaceType {
        INVALID = -1,
        PERCENT_OUTPUT = 0,
        POSITION = 1,
        VELOCITY = 2,
    };

    static InterfaceType str_to_interface(const std::string& str);

    rclcpp::Logger logger_;

    hardware_interface::HardwareInfo info_;

    std::vector<ros_phoenix::msg::MotorControl::SharedPtr> hw_cmd_;
    std::vector<ros_phoenix::msg::MotorStatus::SharedPtr> hw_status_;

    rclcpp::Node::SharedPtr node_;
    rclcpp::executors::SingleThreadedExecutor::SharedPtr executor_;
    std::thread spin_thread_;

    std::vector<rclcpp::Publisher<ros_phoenix::msg::MotorControl>::SharedPtr> publishers_;
    std::vector<rclcpp::Subscription<ros_phoenix::msg::MotorStatus>::SharedPtr> subscribers_;
};

} // namespace ros_phoenix
#endif // ROS_PHOENIX_PHOENIX_BRIDGE