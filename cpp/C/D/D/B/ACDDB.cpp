#include "ACDDB.h"
#include "A/ACDDBA.h"
#include "B/ACDDBB.h"
#include "C/ACDDBC.h"
#include "D/ACDDBD.h"
#include "E/ACDDBE.h"

namespace ACDDB {

std::string run() {
  std::string out("ACDDB");
  out += std::string(SEPARATOR);
  out += ACDDBA::run();
  out += std::string(SEPARATOR);
  out += ACDDBB::run();
  out += std::string(SEPARATOR);
  out += ACDDBC::run();
  out += std::string(SEPARATOR);
  out += ACDDBD::run();
  out += std::string(SEPARATOR);
  out += ACDDBE::run();
  return out;
}

}