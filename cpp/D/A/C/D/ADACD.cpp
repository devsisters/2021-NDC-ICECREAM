#include "ADACD.h"
#include "A/ADACDA.h"
#include "B/ADACDB.h"
#include "C/ADACDC.h"
#include "D/ADACDD.h"
#include "E/ADACDE.h"

namespace ADACD {

std::string run() {
  std::string out("ADACD");
  out += std::string(SEPARATOR);
  out += ADACDA::run();
  out += std::string(SEPARATOR);
  out += ADACDB::run();
  out += std::string(SEPARATOR);
  out += ADACDC::run();
  out += std::string(SEPARATOR);
  out += ADACDD::run();
  out += std::string(SEPARATOR);
  out += ADACDE::run();
  return out;
}

}