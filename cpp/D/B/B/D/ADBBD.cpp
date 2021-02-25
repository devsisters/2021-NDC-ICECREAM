#include "ADBBD.h"
#include "A/ADBBDA.h"
#include "B/ADBBDB.h"
#include "C/ADBBDC.h"
#include "D/ADBBDD.h"
#include "E/ADBBDE.h"

namespace ADBBD {

std::string run() {
  std::string out("ADBBD");
  out += std::string(SEPARATOR);
  out += ADBBDA::run();
  out += std::string(SEPARATOR);
  out += ADBBDB::run();
  out += std::string(SEPARATOR);
  out += ADBBDC::run();
  out += std::string(SEPARATOR);
  out += ADBBDD::run();
  out += std::string(SEPARATOR);
  out += ADBBDE::run();
  return out;
}

}