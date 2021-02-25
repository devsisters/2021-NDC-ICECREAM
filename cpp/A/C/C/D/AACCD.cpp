#include "AACCD.h"
#include "A/AACCDA.h"
#include "B/AACCDB.h"
#include "C/AACCDC.h"
#include "D/AACCDD.h"
#include "E/AACCDE.h"

namespace AACCD {

std::string run() {
  std::string out("AACCD");
  out += std::string(SEPARATOR);
  out += AACCDA::run();
  out += std::string(SEPARATOR);
  out += AACCDB::run();
  out += std::string(SEPARATOR);
  out += AACCDC::run();
  out += std::string(SEPARATOR);
  out += AACCDD::run();
  out += std::string(SEPARATOR);
  out += AACCDE::run();
  return out;
}

}