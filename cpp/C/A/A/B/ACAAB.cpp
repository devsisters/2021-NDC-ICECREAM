#include "ACAAB.h"
#include "A/ACAABA.h"
#include "B/ACAABB.h"
#include "C/ACAABC.h"
#include "D/ACAABD.h"
#include "E/ACAABE.h"

namespace ACAAB {

std::string run() {
  std::string out("ACAAB");
  out += std::string(SEPARATOR);
  out += ACAABA::run();
  out += std::string(SEPARATOR);
  out += ACAABB::run();
  out += std::string(SEPARATOR);
  out += ACAABC::run();
  out += std::string(SEPARATOR);
  out += ACAABD::run();
  out += std::string(SEPARATOR);
  out += ACAABE::run();
  return out;
}

}