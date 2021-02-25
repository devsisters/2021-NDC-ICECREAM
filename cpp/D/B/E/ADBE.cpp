#include "ADBE.h"
#include "A/ADBEA.h"
#include "B/ADBEB.h"
#include "C/ADBEC.h"
#include "D/ADBED.h"
#include "E/ADBEE.h"

namespace ADBE {

std::string run() {
  std::string out("ADBE");
  out += std::string(SEPARATOR);
  out += ADBEA::run();
  out += std::string(SEPARATOR);
  out += ADBEB::run();
  out += std::string(SEPARATOR);
  out += ADBEC::run();
  out += std::string(SEPARATOR);
  out += ADBED::run();
  out += std::string(SEPARATOR);
  out += ADBEE::run();
  return out;
}

}