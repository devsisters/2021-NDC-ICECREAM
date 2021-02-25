#include "AACDB.h"
#include "A/AACDBA.h"
#include "B/AACDBB.h"
#include "C/AACDBC.h"
#include "D/AACDBD.h"
#include "E/AACDBE.h"

namespace AACDB {

std::string run() {
  std::string out("AACDB");
  out += std::string(SEPARATOR);
  out += AACDBA::run();
  out += std::string(SEPARATOR);
  out += AACDBB::run();
  out += std::string(SEPARATOR);
  out += AACDBC::run();
  out += std::string(SEPARATOR);
  out += AACDBD::run();
  out += std::string(SEPARATOR);
  out += AACDBE::run();
  return out;
}

}