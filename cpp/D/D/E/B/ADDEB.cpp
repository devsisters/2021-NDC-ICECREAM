#include "ADDEB.h"
#include "A/ADDEBA.h"
#include "B/ADDEBB.h"
#include "C/ADDEBC.h"
#include "D/ADDEBD.h"
#include "E/ADDEBE.h"

namespace ADDEB {

std::string run() {
  std::string out("ADDEB");
  out += std::string(SEPARATOR);
  out += ADDEBA::run();
  out += std::string(SEPARATOR);
  out += ADDEBB::run();
  out += std::string(SEPARATOR);
  out += ADDEBC::run();
  out += std::string(SEPARATOR);
  out += ADDEBD::run();
  out += std::string(SEPARATOR);
  out += ADDEBE::run();
  return out;
}

}