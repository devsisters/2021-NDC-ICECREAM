#include "AAEDB.h"
#include "A/AAEDBA.h"
#include "B/AAEDBB.h"
#include "C/AAEDBC.h"
#include "D/AAEDBD.h"
#include "E/AAEDBE.h"

namespace AAEDB {

std::string run() {
  std::string out("AAEDB");
  out += std::string(SEPARATOR);
  out += AAEDBA::run();
  out += std::string(SEPARATOR);
  out += AAEDBB::run();
  out += std::string(SEPARATOR);
  out += AAEDBC::run();
  out += std::string(SEPARATOR);
  out += AAEDBD::run();
  out += std::string(SEPARATOR);
  out += AAEDBE::run();
  return out;
}

}