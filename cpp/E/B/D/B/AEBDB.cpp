#include "AEBDB.h"
#include "A/AEBDBA.h"
#include "B/AEBDBB.h"
#include "C/AEBDBC.h"
#include "D/AEBDBD.h"
#include "E/AEBDBE.h"

namespace AEBDB {

std::string run() {
  std::string out("AEBDB");
  out += std::string(SEPARATOR);
  out += AEBDBA::run();
  out += std::string(SEPARATOR);
  out += AEBDBB::run();
  out += std::string(SEPARATOR);
  out += AEBDBC::run();
  out += std::string(SEPARATOR);
  out += AEBDBD::run();
  out += std::string(SEPARATOR);
  out += AEBDBE::run();
  return out;
}

}