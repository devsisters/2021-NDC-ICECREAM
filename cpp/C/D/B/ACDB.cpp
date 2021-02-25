#include "ACDB.h"
#include "A/ACDBA.h"
#include "B/ACDBB.h"
#include "C/ACDBC.h"
#include "D/ACDBD.h"
#include "E/ACDBE.h"

namespace ACDB {

std::string run() {
  std::string out("ACDB");
  out += std::string(SEPARATOR);
  out += ACDBA::run();
  out += std::string(SEPARATOR);
  out += ACDBB::run();
  out += std::string(SEPARATOR);
  out += ACDBC::run();
  out += std::string(SEPARATOR);
  out += ACDBD::run();
  out += std::string(SEPARATOR);
  out += ACDBE::run();
  return out;
}

}