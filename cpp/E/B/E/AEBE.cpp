#include "AEBE.h"
#include "A/AEBEA.h"
#include "B/AEBEB.h"
#include "C/AEBEC.h"
#include "D/AEBED.h"
#include "E/AEBEE.h"

namespace AEBE {

std::string run() {
  std::string out("AEBE");
  out += std::string(SEPARATOR);
  out += AEBEA::run();
  out += std::string(SEPARATOR);
  out += AEBEB::run();
  out += std::string(SEPARATOR);
  out += AEBEC::run();
  out += std::string(SEPARATOR);
  out += AEBED::run();
  out += std::string(SEPARATOR);
  out += AEBEE::run();
  return out;
}

}