#include "ABEEE.h"
#include "A/ABEEEA.h"
#include "B/ABEEEB.h"
#include "C/ABEEEC.h"
#include "D/ABEEED.h"
#include "E/ABEEEE.h"

namespace ABEEE {

std::string run() {
  std::string out("ABEEE");
  out += std::string(SEPARATOR);
  out += ABEEEA::run();
  out += std::string(SEPARATOR);
  out += ABEEEB::run();
  out += std::string(SEPARATOR);
  out += ABEEEC::run();
  out += std::string(SEPARATOR);
  out += ABEEED::run();
  out += std::string(SEPARATOR);
  out += ABEEEE::run();
  return out;
}

}