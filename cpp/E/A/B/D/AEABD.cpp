#include "AEABD.h"
#include "A/AEABDA.h"
#include "B/AEABDB.h"
#include "C/AEABDC.h"
#include "D/AEABDD.h"
#include "E/AEABDE.h"

namespace AEABD {

std::string run() {
  std::string out("AEABD");
  out += std::string(SEPARATOR);
  out += AEABDA::run();
  out += std::string(SEPARATOR);
  out += AEABDB::run();
  out += std::string(SEPARATOR);
  out += AEABDC::run();
  out += std::string(SEPARATOR);
  out += AEABDD::run();
  out += std::string(SEPARATOR);
  out += AEABDE::run();
  return out;
}

}