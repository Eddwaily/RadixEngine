#ifndef SHADER_HPP
#define SHADER_HPP

#include <epoxy/gl.h>
#include <string>
#include <map>

namespace radix {

class Shader {
public:
  int handle;
  GLint uni(const std::string&);
  GLint att(const std::string&);
private:
  std::map<std::string, GLint> locationMap;
};

} /* namespace radix */

#endif /* SHADER_HPP */