#include "ABDDD.h"
#include "A/ABDDDA.h"
#include "B/ABDDDB.h"
#include "C/ABDDDC.h"
#include "D/ABDDDD.h"
#include "E/ABDDDE.h"

namespace ABDDD {

std::string run() {
  std::string out("ABDDD");
  out += std::string(SEPARATOR);
  out += ABDDDA::run();
  out += std::string(SEPARATOR);
  out += ABDDDB::run();
  out += std::string(SEPARATOR);
  out += ABDDDC::run();
  out += std::string(SEPARATOR);
  out += ABDDDD::run();
  out += std::string(SEPARATOR);
  out += ABDDDE::run();
  return out;
}

}