#include "ACBCA.h"
#include "A/ACBCAA.h"
#include "B/ACBCAB.h"
#include "C/ACBCAC.h"
#include "D/ACBCAD.h"
#include "E/ACBCAE.h"

namespace ACBCA {

std::string run() {
  std::string out("ACBCA");
  out += std::string(SEPARATOR);
  out += ACBCAA::run();
  out += std::string(SEPARATOR);
  out += ACBCAB::run();
  out += std::string(SEPARATOR);
  out += ACBCAC::run();
  out += std::string(SEPARATOR);
  out += ACBCAD::run();
  out += std::string(SEPARATOR);
  out += ACBCAE::run();
  return out;
}

}