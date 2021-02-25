#include "AEEDE.h"
#include "A/AEEDEA.h"
#include "B/AEEDEB.h"
#include "C/AEEDEC.h"
#include "D/AEEDED.h"
#include "E/AEEDEE.h"

namespace AEEDE {

std::string run() {
  std::string out("AEEDE");
  out += std::string(SEPARATOR);
  out += AEEDEA::run();
  out += std::string(SEPARATOR);
  out += AEEDEB::run();
  out += std::string(SEPARATOR);
  out += AEEDEC::run();
  out += std::string(SEPARATOR);
  out += AEEDED::run();
  out += std::string(SEPARATOR);
  out += AEEDEE::run();
  return out;
}

}