#include "ADABA.h"
#include "A/ADABAA.h"
#include "B/ADABAB.h"
#include "C/ADABAC.h"
#include "D/ADABAD.h"
#include "E/ADABAE.h"

namespace ADABA {

std::string run() {
  std::string out("ADABA");
  out += std::string(SEPARATOR);
  out += ADABAA::run();
  out += std::string(SEPARATOR);
  out += ADABAB::run();
  out += std::string(SEPARATOR);
  out += ADABAC::run();
  out += std::string(SEPARATOR);
  out += ADABAD::run();
  out += std::string(SEPARATOR);
  out += ADABAE::run();
  return out;
}

}