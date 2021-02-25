#include "ACADE.h"
#include "A/ACADEA.h"
#include "B/ACADEB.h"
#include "C/ACADEC.h"
#include "D/ACADED.h"
#include "E/ACADEE.h"

namespace ACADE {

std::string run() {
  std::string out("ACADE");
  out += std::string(SEPARATOR);
  out += ACADEA::run();
  out += std::string(SEPARATOR);
  out += ACADEB::run();
  out += std::string(SEPARATOR);
  out += ACADEC::run();
  out += std::string(SEPARATOR);
  out += ACADED::run();
  out += std::string(SEPARATOR);
  out += ACADEE::run();
  return out;
}

}