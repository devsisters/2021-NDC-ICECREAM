#include "ACABC.h"
#include "A/ACABCA.h"
#include "B/ACABCB.h"
#include "C/ACABCC.h"
#include "D/ACABCD.h"
#include "E/ACABCE.h"

namespace ACABC {

std::string run() {
  std::string out("ACABC");
  out += std::string(SEPARATOR);
  out += ACABCA::run();
  out += std::string(SEPARATOR);
  out += ACABCB::run();
  out += std::string(SEPARATOR);
  out += ACABCC::run();
  out += std::string(SEPARATOR);
  out += ACABCD::run();
  out += std::string(SEPARATOR);
  out += ACABCE::run();
  return out;
}

}