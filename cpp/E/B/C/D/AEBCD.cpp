#include "AEBCD.h"
#include "A/AEBCDA.h"
#include "B/AEBCDB.h"
#include "C/AEBCDC.h"
#include "D/AEBCDD.h"
#include "E/AEBCDE.h"

namespace AEBCD {

std::string run() {
  std::string out("AEBCD");
  out += std::string(SEPARATOR);
  out += AEBCDA::run();
  out += std::string(SEPARATOR);
  out += AEBCDB::run();
  out += std::string(SEPARATOR);
  out += AEBCDC::run();
  out += std::string(SEPARATOR);
  out += AEBCDD::run();
  out += std::string(SEPARATOR);
  out += AEBCDE::run();
  return out;
}

}