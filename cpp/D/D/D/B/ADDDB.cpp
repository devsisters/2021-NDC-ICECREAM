#include "ADDDB.h"
#include "A/ADDDBA.h"
#include "B/ADDDBB.h"
#include "C/ADDDBC.h"
#include "D/ADDDBD.h"
#include "E/ADDDBE.h"

namespace ADDDB {

std::string run() {
  std::string out("ADDDB");
  out += std::string(SEPARATOR);
  out += ADDDBA::run();
  out += std::string(SEPARATOR);
  out += ADDDBB::run();
  out += std::string(SEPARATOR);
  out += ADDDBC::run();
  out += std::string(SEPARATOR);
  out += ADDDBD::run();
  out += std::string(SEPARATOR);
  out += ADDDBE::run();
  return out;
}

}