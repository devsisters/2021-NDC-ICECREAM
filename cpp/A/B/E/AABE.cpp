#include "AABE.h"
#include "A/AABEA.h"
#include "B/AABEB.h"
#include "C/AABEC.h"
#include "D/AABED.h"
#include "E/AABEE.h"

namespace AABE {

std::string run() {
  std::string out("AABE");
  out += std::string(SEPARATOR);
  out += AABEA::run();
  out += std::string(SEPARATOR);
  out += AABEB::run();
  out += std::string(SEPARATOR);
  out += AABEC::run();
  out += std::string(SEPARATOR);
  out += AABED::run();
  out += std::string(SEPARATOR);
  out += AABEE::run();
  return out;
}

}