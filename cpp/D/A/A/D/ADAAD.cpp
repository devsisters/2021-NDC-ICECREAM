#include "ADAAD.h"
#include "A/ADAADA.h"
#include "B/ADAADB.h"
#include "C/ADAADC.h"
#include "D/ADAADD.h"
#include "E/ADAADE.h"

namespace ADAAD {

std::string run() {
  std::string out("ADAAD");
  out += std::string(SEPARATOR);
  out += ADAADA::run();
  out += std::string(SEPARATOR);
  out += ADAADB::run();
  out += std::string(SEPARATOR);
  out += ADAADC::run();
  out += std::string(SEPARATOR);
  out += ADAADD::run();
  out += std::string(SEPARATOR);
  out += ADAADE::run();
  return out;
}

}