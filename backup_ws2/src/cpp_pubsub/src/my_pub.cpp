/* 
This code publishes a hardcoded value to the to cmd_vel. It is a good way to check if topics and message types are properly identified
*/

#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
// following headers can be used depending on the input and output messag type
// #include "std_msgs/msg/string.hpp"
// #include "geometry_msgs/msg/twist.hpp"
// #include "std_msgs/msg/string.hpp"             //built-in message type you will use to publish data
// #include <geometry_msgs/msg/twist.hpp>
#include <geometry_msgs/msg/twist_stamped.hpp> // message type diffbot uses
#include <sensor_msgs/msg/joy.hpp> // message type used by the joy_node
#include <ros_phoenix/msg/motor_control.hpp>             // message type used by the joy_node

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class CmdPublisher : public rclcpp::Node // creates the node class CmdPublisher by inheriting from rclcpp::Node
                                             // Every this in the code is referring to the node.
{
public: // public constructor
    CmdPublisher() : Node("cmd_publisher"), count_(0) // renames the node to cmd_publisher and initializes count_ to 0.
    {
        publisher_ = this->create_publisher<ros_phoenix::msg::MotorControl>("/talon_right/set", 10);
        timer_ = this->create_wall_timer(
            50ms, std::bind(&CmdPublisher::timer_callback, this)); // Next, timer_ is initialized, causes the timer_callback function to execute every 50ms.
    }

private:
    void timer_callback() // timer_callback function: the message data is set and the messages are actually published
    {
        // auto message = std_msgs::msg::String();
        auto message = ros_phoenix::msg::MotorControl();
        // message.data = "Hello, world! " + std::to_string(count_++); // Creates the message
        message.mode = 0;
        message.value = 1.0;
        auto pub_str = "{ mode: " + std::to_string(message.mode) + ", value: " + std::to_string(message.value) + "}";
        // // message.header.frame_id = ''; // for twiststamped messages the headers can be predefined
        // message.twist.linear.z = 0;
        // message.twist.angular.x = 0.0;
        // message.twist.angular.y = 0.0;
        // message.twist.angular.z = 1.8;
        // auto pub_str = "linear: [" + std::to_string(message.twist.linear.x) + ", " +
        //            std::to_string(message.twist.linear.y) + ", " +
        //            std::to_string(message.twist.linear.z) + "], angular: [" +
        //            std::to_string(message.twist.angular.x) + ", " +
        //            std::to_string(message.twist.angular.y) + ", " +
        //            std::to_string(message.twist.angular.z) + "]";
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", pub_str.c_str()); // RCLCPP_INFO macro ensures messages are published and printed to the console
        publisher_->publish(message);                                              // publishing the message
    }
    // declaration of the timer, publisher, and counter fields.
    rclcpp::TimerBase::SharedPtr timer_;
    //   rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::Publisher<ros_phoenix::msg::MotorControl>::SharedPtr publisher_;
    size_t count_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);                           // initializes ROS 2
    rclcpp::spin(std::make_shared<CmdPublisher>()); // starts processing data from the node, including callbacks from the timer
    rclcpp::shutdown();
    return 0;
}
