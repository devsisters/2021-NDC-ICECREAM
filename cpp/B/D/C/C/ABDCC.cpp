#include "ABDCC.h"
#include "A/ABDCCA.h"
#include "B/ABDCCB.h"
#include "C/ABDCCC.h"
#include "D/ABDCCD.h"
#include "E/ABDCCE.h"

namespace ABDCC {

std::string run() {
  std::string out("ABDCC");
  out += std::string(SEPARATOR);
  out += ABDCCA::run();
  out += std::string(SEPARATOR);
  out += ABDCCB::run();
  out += std::string(SEPARATOR);
  out += ABDCCC::run();
  out += std::string(SEPARATOR);
  out += ABDCCD::run();
  out += std::string(SEPARATOR);
  out += ABDCCE::run();
  return out;
}

}