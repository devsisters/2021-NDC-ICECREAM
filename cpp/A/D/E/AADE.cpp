#include "AADE.h"
#include "A/AADEA.h"
#include "B/AADEB.h"
#include "C/AADEC.h"
#include "D/AADED.h"
#include "E/AADEE.h"

namespace AADE {

std::string run() {
  std::string out("AADE");
  out += std::string(SEPARATOR);
  out += AADEA::run();
  out += std::string(SEPARATOR);
  out += AADEB::run();
  out += std::string(SEPARATOR);
  out += AADEC::run();
  out += std::string(SEPARATOR);
  out += AADED::run();
  out += std::string(SEPARATOR);
  out += AADEE::run();
  return out;
}

}