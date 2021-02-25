#include "ABEDD.h"
#include "A/ABEDDA.h"
#include "B/ABEDDB.h"
#include "C/ABEDDC.h"
#include "D/ABEDDD.h"
#include "E/ABEDDE.h"

namespace ABEDD {

std::string run() {
  std::string out("ABEDD");
  out += std::string(SEPARATOR);
  out += ABEDDA::run();
  out += std::string(SEPARATOR);
  out += ABEDDB::run();
  out += std::string(SEPARATOR);
  out += ABEDDC::run();
  out += std::string(SEPARATOR);
  out += ABEDDD::run();
  out += std::string(SEPARATOR);
  out += ABEDDE::run();
  return out;
}

}