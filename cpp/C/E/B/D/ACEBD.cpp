#include "ACEBD.h"
#include "A/ACEBDA.h"
#include "B/ACEBDB.h"
#include "C/ACEBDC.h"
#include "D/ACEBDD.h"
#include "E/ACEBDE.h"

namespace ACEBD {

std::string run() {
  std::string out("ACEBD");
  out += std::string(SEPARATOR);
  out += ACEBDA::run();
  out += std::string(SEPARATOR);
  out += ACEBDB::run();
  out += std::string(SEPARATOR);
  out += ACEBDC::run();
  out += std::string(SEPARATOR);
  out += ACEBDD::run();
  out += std::string(SEPARATOR);
  out += ACEBDE::run();
  return out;
}

}