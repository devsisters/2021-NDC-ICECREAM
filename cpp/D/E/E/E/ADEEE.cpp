#include "ADEEE.h"
#include "A/ADEEEA.h"
#include "B/ADEEEB.h"
#include "C/ADEEEC.h"
#include "D/ADEEED.h"
#include "E/ADEEEE.h"

namespace ADEEE {

std::string run() {
  std::string out("ADEEE");
  out += std::string(SEPARATOR);
  out += ADEEEA::run();
  out += std::string(SEPARATOR);
  out += ADEEEB::run();
  out += std::string(SEPARATOR);
  out += ADEEEC::run();
  out += std::string(SEPARATOR);
  out += ADEEED::run();
  out += std::string(SEPARATOR);
  out += ADEEEE::run();
  return out;
}

}