#include "AAADE.h"
#include "A/AAADEA.h"
#include "B/AAADEB.h"
#include "C/AAADEC.h"
#include "D/AAADED.h"
#include "E/AAADEE.h"

namespace AAADE {

std::string run() {
  std::string out("AAADE");
  out += std::string(SEPARATOR);
  out += AAADEA::run();
  out += std::string(SEPARATOR);
  out += AAADEB::run();
  out += std::string(SEPARATOR);
  out += AAADEC::run();
  out += std::string(SEPARATOR);
  out += AAADED::run();
  out += std::string(SEPARATOR);
  out += AAADEE::run();
  return out;
}

}