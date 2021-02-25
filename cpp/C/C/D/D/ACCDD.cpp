#include "ACCDD.h"
#include "A/ACCDDA.h"
#include "B/ACCDDB.h"
#include "C/ACCDDC.h"
#include "D/ACCDDD.h"
#include "E/ACCDDE.h"

namespace ACCDD {

std::string run() {
  std::string out("ACCDD");
  out += std::string(SEPARATOR);
  out += ACCDDA::run();
  out += std::string(SEPARATOR);
  out += ACCDDB::run();
  out += std::string(SEPARATOR);
  out += ACCDDC::run();
  out += std::string(SEPARATOR);
  out += ACCDDD::run();
  out += std::string(SEPARATOR);
  out += ACCDDE::run();
  return out;
}

}