#include "ACEA.h"
#include "A/ACEAA.h"
#include "B/ACEAB.h"
#include "C/ACEAC.h"
#include "D/ACEAD.h"
#include "E/ACEAE.h"

namespace ACEA {

std::string run() {
  std::string out("ACEA");
  out += std::string(SEPARATOR);
  out += ACEAA::run();
  out += std::string(SEPARATOR);
  out += ACEAB::run();
  out += std::string(SEPARATOR);
  out += ACEAC::run();
  out += std::string(SEPARATOR);
  out += ACEAD::run();
  out += std::string(SEPARATOR);
  out += ACEAE::run();
  return out;
}

}