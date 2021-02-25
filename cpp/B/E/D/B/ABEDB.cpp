#include "ABEDB.h"
#include "A/ABEDBA.h"
#include "B/ABEDBB.h"
#include "C/ABEDBC.h"
#include "D/ABEDBD.h"
#include "E/ABEDBE.h"

namespace ABEDB {

std::string run() {
  std::string out("ABEDB");
  out += std::string(SEPARATOR);
  out += ABEDBA::run();
  out += std::string(SEPARATOR);
  out += ABEDBB::run();
  out += std::string(SEPARATOR);
  out += ABEDBC::run();
  out += std::string(SEPARATOR);
  out += ABEDBD::run();
  out += std::string(SEPARATOR);
  out += ABEDBE::run();
  return out;
}

}