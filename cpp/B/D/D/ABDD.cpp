#include "ABDD.h"
#include "A/ABDDA.h"
#include "B/ABDDB.h"
#include "C/ABDDC.h"
#include "D/ABDDD.h"
#include "E/ABDDE.h"

namespace ABDD {

std::string run() {
  std::string out("ABDD");
  out += std::string(SEPARATOR);
  out += ABDDA::run();
  out += std::string(SEPARATOR);
  out += ABDDB::run();
  out += std::string(SEPARATOR);
  out += ABDDC::run();
  out += std::string(SEPARATOR);
  out += ABDDD::run();
  out += std::string(SEPARATOR);
  out += ABDDE::run();
  return out;
}

}