#include "ABADE.h"
#include "A/ABADEA.h"
#include "B/ABADEB.h"
#include "C/ABADEC.h"
#include "D/ABADED.h"
#include "E/ABADEE.h"

namespace ABADE {

std::string run() {
  std::string out("ABADE");
  out += std::string(SEPARATOR);
  out += ABADEA::run();
  out += std::string(SEPARATOR);
  out += ABADEB::run();
  out += std::string(SEPARATOR);
  out += ABADEC::run();
  out += std::string(SEPARATOR);
  out += ABADED::run();
  out += std::string(SEPARATOR);
  out += ABADEE::run();
  return out;
}

}