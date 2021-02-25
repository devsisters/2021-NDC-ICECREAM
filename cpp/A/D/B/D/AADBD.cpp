#include "AADBD.h"
#include "A/AADBDA.h"
#include "B/AADBDB.h"
#include "C/AADBDC.h"
#include "D/AADBDD.h"
#include "E/AADBDE.h"

namespace AADBD {

std::string run() {
  std::string out("AADBD");
  out += std::string(SEPARATOR);
  out += AADBDA::run();
  out += std::string(SEPARATOR);
  out += AADBDB::run();
  out += std::string(SEPARATOR);
  out += AADBDC::run();
  out += std::string(SEPARATOR);
  out += AADBDD::run();
  out += std::string(SEPARATOR);
  out += AADBDE::run();
  return out;
}

}