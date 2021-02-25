#include "ABDC.h"
#include "A/ABDCA.h"
#include "B/ABDCB.h"
#include "C/ABDCC.h"
#include "D/ABDCD.h"
#include "E/ABDCE.h"

namespace ABDC {

std::string run() {
  std::string out("ABDC");
  out += std::string(SEPARATOR);
  out += ABDCA::run();
  out += std::string(SEPARATOR);
  out += ABDCB::run();
  out += std::string(SEPARATOR);
  out += ABDCC::run();
  out += std::string(SEPARATOR);
  out += ABDCD::run();
  out += std::string(SEPARATOR);
  out += ABDCE::run();
  return out;
}

}