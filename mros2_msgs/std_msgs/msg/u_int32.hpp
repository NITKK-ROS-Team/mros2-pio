#include <string>

namespace std_msgs
{
namespace msg
{
class UInt32
{
public:
  std::string getTypeName();
  uint32_t data;
  void copyToBuf(uint8_t *addrPtr)
  {
    memcpy(addrPtr, &data, 4);
    addrPtr += 4;
  }

  void copyFromBuf(const uint8_t *addrPtr)
  {
    memcpy(&data, addrPtr, 4);
    addrPtr += 4;
  }

  uint8_t getTotalSize()
  {
    return 4;
  }
private:
  std::string type_name = "std_msgs::msg::dds_::UInt32";
};
}//namspace msg
}//namespace std_msgs

namespace message_traits
{

template<>
struct TypeName<std_msgs::msg::UInt32*> {
  static const char* value()
  {
    return "std_msgs::msg::dds_::UInt32_";
  }
};

}
