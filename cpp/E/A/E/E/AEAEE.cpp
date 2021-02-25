#include "AEAEE.h"
#include "A/AEAEEA.h"
#include "B/AEAEEB.h"
#include "C/AEAEEC.h"
#include "D/AEAEED.h"
#include "E/AEAEEE.h"

namespace AEAEE {

std::string run() {
  std::string out("AEAEE");
  out += std::string(SEPARATOR);
  out += AEAEEA::run();
  out += std::string(SEPARATOR);
  out += AEAEEB::run();
  out += std::string(SEPARATOR);
  out += AEAEEC::run();
  out += std::string(SEPARATOR);
  out += AEAEED::run();
  out += std::string(SEPARATOR);
  out += AEAEEE::run();
  return out;
}

}