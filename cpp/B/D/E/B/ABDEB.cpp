#include "ABDEB.h"
#include "A/ABDEBA.h"
#include "B/ABDEBB.h"
#include "C/ABDEBC.h"
#include "D/ABDEBD.h"
#include "E/ABDEBE.h"

namespace ABDEB {

std::string run() {
  std::string out("ABDEB");
  out += std::string(SEPARATOR);
  out += ABDEBA::run();
  out += std::string(SEPARATOR);
  out += ABDEBB::run();
  out += std::string(SEPARATOR);
  out += ABDEBC::run();
  out += std::string(SEPARATOR);
  out += ABDEBD::run();
  out += std::string(SEPARATOR);
  out += ABDEBE::run();
  return out;
}

}