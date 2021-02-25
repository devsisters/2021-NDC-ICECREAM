#include "ADBCA.h"
#include "A/ADBCAA.h"
#include "B/ADBCAB.h"
#include "C/ADBCAC.h"
#include "D/ADBCAD.h"
#include "E/ADBCAE.h"

namespace ADBCA {

std::string run() {
  std::string out("ADBCA");
  out += std::string(SEPARATOR);
  out += ADBCAA::run();
  out += std::string(SEPARATOR);
  out += ADBCAB::run();
  out += std::string(SEPARATOR);
  out += ADBCAC::run();
  out += std::string(SEPARATOR);
  out += ADBCAD::run();
  out += std::string(SEPARATOR);
  out += ADBCAE::run();
  return out;
}

}