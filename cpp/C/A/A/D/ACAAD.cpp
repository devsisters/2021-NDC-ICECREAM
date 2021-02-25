#include "ACAAD.h"
#include "A/ACAADA.h"
#include "B/ACAADB.h"
#include "C/ACAADC.h"
#include "D/ACAADD.h"
#include "E/ACAADE.h"

namespace ACAAD {

std::string run() {
  std::string out("ACAAD");
  out += std::string(SEPARATOR);
  out += ACAADA::run();
  out += std::string(SEPARATOR);
  out += ACAADB::run();
  out += std::string(SEPARATOR);
  out += ACAADC::run();
  out += std::string(SEPARATOR);
  out += ACAADD::run();
  out += std::string(SEPARATOR);
  out += ACAADE::run();
  return out;
}

}