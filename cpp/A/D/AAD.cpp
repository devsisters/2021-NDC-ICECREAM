#include "AAD.h"
#include "A/AADA.h"
#include "B/AADB.h"
#include "C/AADC.h"
#include "D/AADD.h"
#include "E/AADE.h"

namespace AAD {

std::string run() {
  std::string out("AAD");
  out += std::string(SEPARATOR);
  out += AADA::run();
  out += std::string(SEPARATOR);
  out += AADB::run();
  out += std::string(SEPARATOR);
  out += AADC::run();
  out += std::string(SEPARATOR);
  out += AADD::run();
  out += std::string(SEPARATOR);
  out += AADE::run();
  return out;
}

}