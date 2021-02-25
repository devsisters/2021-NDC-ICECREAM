#include "AEADE.h"
#include "A/AEADEA.h"
#include "B/AEADEB.h"
#include "C/AEADEC.h"
#include "D/AEADED.h"
#include "E/AEADEE.h"

namespace AEADE {

std::string run() {
  std::string out("AEADE");
  out += std::string(SEPARATOR);
  out += AEADEA::run();
  out += std::string(SEPARATOR);
  out += AEADEB::run();
  out += std::string(SEPARATOR);
  out += AEADEC::run();
  out += std::string(SEPARATOR);
  out += AEADED::run();
  out += std::string(SEPARATOR);
  out += AEADEE::run();
  return out;
}

}