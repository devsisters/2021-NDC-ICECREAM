#include "ACEDB.h"
#include "A/ACEDBA.h"
#include "B/ACEDBB.h"
#include "C/ACEDBC.h"
#include "D/ACEDBD.h"
#include "E/ACEDBE.h"

namespace ACEDB {

std::string run() {
  std::string out("ACEDB");
  out += std::string(SEPARATOR);
  out += ACEDBA::run();
  out += std::string(SEPARATOR);
  out += ACEDBB::run();
  out += std::string(SEPARATOR);
  out += ACEDBC::run();
  out += std::string(SEPARATOR);
  out += ACEDBD::run();
  out += std::string(SEPARATOR);
  out += ACEDBE::run();
  return out;
}

}