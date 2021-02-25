#include "ADADE.h"
#include "A/ADADEA.h"
#include "B/ADADEB.h"
#include "C/ADADEC.h"
#include "D/ADADED.h"
#include "E/ADADEE.h"

namespace ADADE {

std::string run() {
  std::string out("ADADE");
  out += std::string(SEPARATOR);
  out += ADADEA::run();
  out += std::string(SEPARATOR);
  out += ADADEB::run();
  out += std::string(SEPARATOR);
  out += ADADEC::run();
  out += std::string(SEPARATOR);
  out += ADADED::run();
  out += std::string(SEPARATOR);
  out += ADADEE::run();
  return out;
}

}