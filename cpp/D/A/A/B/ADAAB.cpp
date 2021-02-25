#include "ADAAB.h"
#include "A/ADAABA.h"
#include "B/ADAABB.h"
#include "C/ADAABC.h"
#include "D/ADAABD.h"
#include "E/ADAABE.h"

namespace ADAAB {

std::string run() {
  std::string out("ADAAB");
  out += std::string(SEPARATOR);
  out += ADAABA::run();
  out += std::string(SEPARATOR);
  out += ADAABB::run();
  out += std::string(SEPARATOR);
  out += ADAABC::run();
  out += std::string(SEPARATOR);
  out += ADAABD::run();
  out += std::string(SEPARATOR);
  out += ADAABE::run();
  return out;
}

}