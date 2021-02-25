#include "AABDD.h"
#include "A/AABDDA.h"
#include "B/AABDDB.h"
#include "C/AABDDC.h"
#include "D/AABDDD.h"
#include "E/AABDDE.h"

namespace AABDD {

std::string run() {
  std::string out("AABDD");
  out += std::string(SEPARATOR);
  out += AABDDA::run();
  out += std::string(SEPARATOR);
  out += AABDDB::run();
  out += std::string(SEPARATOR);
  out += AABDDC::run();
  out += std::string(SEPARATOR);
  out += AABDDD::run();
  out += std::string(SEPARATOR);
  out += AABDDE::run();
  return out;
}

}