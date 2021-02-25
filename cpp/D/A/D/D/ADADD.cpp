#include "ADADD.h"
#include "A/ADADDA.h"
#include "B/ADADDB.h"
#include "C/ADADDC.h"
#include "D/ADADDD.h"
#include "E/ADADDE.h"

namespace ADADD {

std::string run() {
  std::string out("ADADD");
  out += std::string(SEPARATOR);
  out += ADADDA::run();
  out += std::string(SEPARATOR);
  out += ADADDB::run();
  out += std::string(SEPARATOR);
  out += ADADDC::run();
  out += std::string(SEPARATOR);
  out += ADADDD::run();
  out += std::string(SEPARATOR);
  out += ADADDE::run();
  return out;
}

}