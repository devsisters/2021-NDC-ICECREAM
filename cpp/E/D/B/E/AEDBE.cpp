#include "AEDBE.h"
#include "A/AEDBEA.h"
#include "B/AEDBEB.h"
#include "C/AEDBEC.h"
#include "D/AEDBED.h"
#include "E/AEDBEE.h"

namespace AEDBE {

std::string run() {
  std::string out("AEDBE");
  out += std::string(SEPARATOR);
  out += AEDBEA::run();
  out += std::string(SEPARATOR);
  out += AEDBEB::run();
  out += std::string(SEPARATOR);
  out += AEDBEC::run();
  out += std::string(SEPARATOR);
  out += AEDBED::run();
  out += std::string(SEPARATOR);
  out += AEDBEE::run();
  return out;
}

}