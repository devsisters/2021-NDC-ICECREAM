#include "AAEBE.h"
#include "A/AAEBEA.h"
#include "B/AAEBEB.h"
#include "C/AAEBEC.h"
#include "D/AAEBED.h"
#include "E/AAEBEE.h"

namespace AAEBE {

std::string run() {
  std::string out("AAEBE");
  out += std::string(SEPARATOR);
  out += AAEBEA::run();
  out += std::string(SEPARATOR);
  out += AAEBEB::run();
  out += std::string(SEPARATOR);
  out += AAEBEC::run();
  out += std::string(SEPARATOR);
  out += AAEBED::run();
  out += std::string(SEPARATOR);
  out += AAEBEE::run();
  return out;
}

}