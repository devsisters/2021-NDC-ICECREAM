#include "ABABE.h"
#include "A/ABABEA.h"
#include "B/ABABEB.h"
#include "C/ABABEC.h"
#include "D/ABABED.h"
#include "E/ABABEE.h"

namespace ABABE {

std::string run() {
  std::string out("ABABE");
  out += std::string(SEPARATOR);
  out += ABABEA::run();
  out += std::string(SEPARATOR);
  out += ABABEB::run();
  out += std::string(SEPARATOR);
  out += ABABEC::run();
  out += std::string(SEPARATOR);
  out += ABABED::run();
  out += std::string(SEPARATOR);
  out += ABABEE::run();
  return out;
}

}