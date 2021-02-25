#include "ADEDB.h"
#include "A/ADEDBA.h"
#include "B/ADEDBB.h"
#include "C/ADEDBC.h"
#include "D/ADEDBD.h"
#include "E/ADEDBE.h"

namespace ADEDB {

std::string run() {
  std::string out("ADEDB");
  out += std::string(SEPARATOR);
  out += ADEDBA::run();
  out += std::string(SEPARATOR);
  out += ADEDBB::run();
  out += std::string(SEPARATOR);
  out += ADEDBC::run();
  out += std::string(SEPARATOR);
  out += ADEDBD::run();
  out += std::string(SEPARATOR);
  out += ADEDBE::run();
  return out;
}

}