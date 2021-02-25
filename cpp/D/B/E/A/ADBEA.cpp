#include "ADBEA.h"
#include "A/ADBEAA.h"
#include "B/ADBEAB.h"
#include "C/ADBEAC.h"
#include "D/ADBEAD.h"
#include "E/ADBEAE.h"

namespace ADBEA {

std::string run() {
  std::string out("ADBEA");
  out += std::string(SEPARATOR);
  out += ADBEAA::run();
  out += std::string(SEPARATOR);
  out += ADBEAB::run();
  out += std::string(SEPARATOR);
  out += ADBEAC::run();
  out += std::string(SEPARATOR);
  out += ADBEAD::run();
  out += std::string(SEPARATOR);
  out += ADBEAE::run();
  return out;
}

}