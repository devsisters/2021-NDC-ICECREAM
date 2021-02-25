#include "ADBAD.h"
#include "A/ADBADA.h"
#include "B/ADBADB.h"
#include "C/ADBADC.h"
#include "D/ADBADD.h"
#include "E/ADBADE.h"

namespace ADBAD {

std::string run() {
  std::string out("ADBAD");
  out += std::string(SEPARATOR);
  out += ADBADA::run();
  out += std::string(SEPARATOR);
  out += ADBADB::run();
  out += std::string(SEPARATOR);
  out += ADBADC::run();
  out += std::string(SEPARATOR);
  out += ADBADD::run();
  out += std::string(SEPARATOR);
  out += ADBADE::run();
  return out;
}

}