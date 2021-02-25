#include "AABD.h"
#include "A/AABDA.h"
#include "B/AABDB.h"
#include "C/AABDC.h"
#include "D/AABDD.h"
#include "E/AABDE.h"

namespace AABD {

std::string run() {
  std::string out("AABD");
  out += std::string(SEPARATOR);
  out += AABDA::run();
  out += std::string(SEPARATOR);
  out += AABDB::run();
  out += std::string(SEPARATOR);
  out += AABDC::run();
  out += std::string(SEPARATOR);
  out += AABDD::run();
  out += std::string(SEPARATOR);
  out += AABDE::run();
  return out;
}

}