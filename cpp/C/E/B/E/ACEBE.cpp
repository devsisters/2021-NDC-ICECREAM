#include "ACEBE.h"
#include "A/ACEBEA.h"
#include "B/ACEBEB.h"
#include "C/ACEBEC.h"
#include "D/ACEBED.h"
#include "E/ACEBEE.h"

namespace ACEBE {

std::string run() {
  std::string out("ACEBE");
  out += std::string(SEPARATOR);
  out += ACEBEA::run();
  out += std::string(SEPARATOR);
  out += ACEBEB::run();
  out += std::string(SEPARATOR);
  out += ACEBEC::run();
  out += std::string(SEPARATOR);
  out += ACEBED::run();
  out += std::string(SEPARATOR);
  out += ACEBEE::run();
  return out;
}

}