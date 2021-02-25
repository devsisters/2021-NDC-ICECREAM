#include "AAEDD.h"
#include "A/AAEDDA.h"
#include "B/AAEDDB.h"
#include "C/AAEDDC.h"
#include "D/AAEDDD.h"
#include "E/AAEDDE.h"

namespace AAEDD {

std::string run() {
  std::string out("AAEDD");
  out += std::string(SEPARATOR);
  out += AAEDDA::run();
  out += std::string(SEPARATOR);
  out += AAEDDB::run();
  out += std::string(SEPARATOR);
  out += AAEDDC::run();
  out += std::string(SEPARATOR);
  out += AAEDDD::run();
  out += std::string(SEPARATOR);
  out += AAEDDE::run();
  return out;
}

}