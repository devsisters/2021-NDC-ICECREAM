#include "AABA.h"
#include "A/AABAA.h"
#include "B/AABAB.h"
#include "C/AABAC.h"
#include "D/AABAD.h"
#include "E/AABAE.h"

namespace AABA {

std::string run() {
  std::string out("AABA");
  out += std::string(SEPARATOR);
  out += AABAA::run();
  out += std::string(SEPARATOR);
  out += AABAB::run();
  out += std::string(SEPARATOR);
  out += AABAC::run();
  out += std::string(SEPARATOR);
  out += AABAD::run();
  out += std::string(SEPARATOR);
  out += AABAE::run();
  return out;
}

}