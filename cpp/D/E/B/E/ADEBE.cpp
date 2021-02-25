#include "ADEBE.h"
#include "A/ADEBEA.h"
#include "B/ADEBEB.h"
#include "C/ADEBEC.h"
#include "D/ADEBED.h"
#include "E/ADEBEE.h"

namespace ADEBE {

std::string run() {
  std::string out("ADEBE");
  out += std::string(SEPARATOR);
  out += ADEBEA::run();
  out += std::string(SEPARATOR);
  out += ADEBEB::run();
  out += std::string(SEPARATOR);
  out += ADEBEC::run();
  out += std::string(SEPARATOR);
  out += ADEBED::run();
  out += std::string(SEPARATOR);
  out += ADEBEE::run();
  return out;
}

}