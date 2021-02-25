#include "AABDB.h"
#include "A/AABDBA.h"
#include "B/AABDBB.h"
#include "C/AABDBC.h"
#include "D/AABDBD.h"
#include "E/AABDBE.h"

namespace AABDB {

std::string run() {
  std::string out("AABDB");
  out += std::string(SEPARATOR);
  out += AABDBA::run();
  out += std::string(SEPARATOR);
  out += AABDBB::run();
  out += std::string(SEPARATOR);
  out += AABDBC::run();
  out += std::string(SEPARATOR);
  out += AABDBD::run();
  out += std::string(SEPARATOR);
  out += AABDBE::run();
  return out;
}

}