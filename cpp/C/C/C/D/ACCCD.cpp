#include "ACCCD.h"
#include "A/ACCCDA.h"
#include "B/ACCCDB.h"
#include "C/ACCCDC.h"
#include "D/ACCCDD.h"
#include "E/ACCCDE.h"

namespace ACCCD {

std::string run() {
  std::string out("ACCCD");
  out += std::string(SEPARATOR);
  out += ACCCDA::run();
  out += std::string(SEPARATOR);
  out += ACCCDB::run();
  out += std::string(SEPARATOR);
  out += ACCCDC::run();
  out += std::string(SEPARATOR);
  out += ACCCDD::run();
  out += std::string(SEPARATOR);
  out += ACCCDE::run();
  return out;
}

}