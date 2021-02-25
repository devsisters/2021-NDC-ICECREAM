#include "ABDBE.h"
#include "A/ABDBEA.h"
#include "B/ABDBEB.h"
#include "C/ABDBEC.h"
#include "D/ABDBED.h"
#include "E/ABDBEE.h"

namespace ABDBE {

std::string run() {
  std::string out("ABDBE");
  out += std::string(SEPARATOR);
  out += ABDBEA::run();
  out += std::string(SEPARATOR);
  out += ABDBEB::run();
  out += std::string(SEPARATOR);
  out += ABDBEC::run();
  out += std::string(SEPARATOR);
  out += ABDBED::run();
  out += std::string(SEPARATOR);
  out += ABDBEE::run();
  return out;
}

}