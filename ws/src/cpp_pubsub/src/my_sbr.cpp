/*
Node subscribes to joy_node input
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
#include <sensor_msgs/msg/joy.hpp>             // message type used by the joy_node
#include <libserial/SerialPort.h>

using std::placeholders::_1;

// axes and buttons of 8BitDo Pro 2
enum Axis
{
  LEFT_STICK_X = 0,
  LEFT_STICK_Y = 1,
  LEFT_TRIGGER = 2,
  RIGHT_STICK_X = 3,
  RIGHT_STICK_Y = 4,
  D_PAD_X = 5,
  D_PAD_Y = 6
};
enum Button
{
  Y = 3,
  B = 1,
  A = 2,
  X = 3,
  L = 4,
  R = 5,
  ZL = 6,
  ZR = 7,
  MINUS = 8,
  PLUS = 9,
  LEFT_STICK_BTN = 10,
  RIGHT_STICK_BTN = 11,
  HOME = 12,
  CIRCLE = 13

};

class JoySubscriber : public rclcpp::Node
{
public: // constructor uses the node’s create_subscription class to execute the callback
        // Subscriber simply responds whenever data is published to the topic topic.
  JoySubscriber() : Node("joy_subscriber")
  {
    // subscription_ = this->create_subscription<std_msgs::msg::String>(
    //   "topic", 10, std::bind(&JoySubscriber::topic_callback, this, _1));
    subscription_ = this->create_subscription<sensor_msgs::msg::Joy>(
        "joy", 10, std::bind(&JoySubscriber::topic_callback, this, _1));
  }

private:
  void topic_callback(const sensor_msgs::msg::Joy &msg) const
  { // topic_callback function receives the string message data published over the topic
    auto to_print = "Front: " + std::to_string(msg.axes[LEFT_STICK_Y]) + ", Turn: " + std::to_string(msg.axes[LEFT_STICK_X]) + "";
    RCLCPP_INFO(this->get_logger(), "I heard: '%s'", to_print.c_str()); // writes msg to console/terminal
  }
  rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscription_;
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<JoySubscriber>()); // preparing to receive messages whenever they come
  rclcpp::shutdown();
  return 0;
}
