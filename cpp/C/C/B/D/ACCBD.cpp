#include "ACCBD.h"
#include "A/ACCBDA.h"
#include "B/ACCBDB.h"
#include "C/ACCBDC.h"
#include "D/ACCBDD.h"
#include "E/ACCBDE.h"

namespace ACCBD {

std::string run() {
  std::string out("ACCBD");
  out += std::string(SEPARATOR);
  out += ACCBDA::run();
  out += std::string(SEPARATOR);
  out += ACCBDB::run();
  out += std::string(SEPARATOR);
  out += ACCBDC::run();
  out += std::string(SEPARATOR);
  out += ACCBDD::run();
  out += std::string(SEPARATOR);
  out += ACCBDE::run();
  return out;
}

}