#include "ABECD.h"
#include "A/ABECDA.h"
#include "B/ABECDB.h"
#include "C/ABECDC.h"
#include "D/ABECDD.h"
#include "E/ABECDE.h"

namespace ABECD {

std::string run() {
  std::string out("ABECD");
  out += std::string(SEPARATOR);
  out += ABECDA::run();
  out += std::string(SEPARATOR);
  out += ABECDB::run();
  out += std::string(SEPARATOR);
  out += ABECDC::run();
  out += std::string(SEPARATOR);
  out += ABECDD::run();
  out += std::string(SEPARATOR);
  out += ABECDE::run();
  return out;
}

}