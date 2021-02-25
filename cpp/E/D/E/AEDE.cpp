#include "AEDE.h"
#include "A/AEDEA.h"
#include "B/AEDEB.h"
#include "C/AEDEC.h"
#include "D/AEDED.h"
#include "E/AEDEE.h"

namespace AEDE {

std::string run() {
  std::string out("AEDE");
  out += std::string(SEPARATOR);
  out += AEDEA::run();
  out += std::string(SEPARATOR);
  out += AEDEB::run();
  out += std::string(SEPARATOR);
  out += AEDEC::run();
  out += std::string(SEPARATOR);
  out += AEDED::run();
  out += std::string(SEPARATOR);
  out += AEDEE::run();
  return out;
}

}