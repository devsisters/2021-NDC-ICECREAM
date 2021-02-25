#include "ADAEB.h"
#include "A/ADAEBA.h"
#include "B/ADAEBB.h"
#include "C/ADAEBC.h"
#include "D/ADAEBD.h"
#include "E/ADAEBE.h"

namespace ADAEB {

std::string run() {
  std::string out("ADAEB");
  out += std::string(SEPARATOR);
  out += ADAEBA::run();
  out += std::string(SEPARATOR);
  out += ADAEBB::run();
  out += std::string(SEPARATOR);
  out += ADAEBC::run();
  out += std::string(SEPARATOR);
  out += ADAEBD::run();
  out += std::string(SEPARATOR);
  out += ADAEBE::run();
  return out;
}

}