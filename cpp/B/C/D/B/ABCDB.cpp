#include "ABCDB.h"
#include "A/ABCDBA.h"
#include "B/ABCDBB.h"
#include "C/ABCDBC.h"
#include "D/ABCDBD.h"
#include "E/ABCDBE.h"

namespace ABCDB {

std::string run() {
  std::string out("ABCDB");
  out += std::string(SEPARATOR);
  out += ABCDBA::run();
  out += std::string(SEPARATOR);
  out += ABCDBB::run();
  out += std::string(SEPARATOR);
  out += ABCDBC::run();
  out += std::string(SEPARATOR);
  out += ABCDBD::run();
  out += std::string(SEPARATOR);
  out += ABCDBE::run();
  return out;
}

}