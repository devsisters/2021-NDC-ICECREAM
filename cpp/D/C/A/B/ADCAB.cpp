#include "ADCAB.h"
#include "A/ADCABA.h"
#include "B/ADCABB.h"
#include "C/ADCABC.h"
#include "D/ADCABD.h"
#include "E/ADCABE.h"

namespace ADCAB {

std::string run() {
  std::string out("ADCAB");
  out += std::string(SEPARATOR);
  out += ADCABA::run();
  out += std::string(SEPARATOR);
  out += ADCABB::run();
  out += std::string(SEPARATOR);
  out += ADCABC::run();
  out += std::string(SEPARATOR);
  out += ADCABD::run();
  out += std::string(SEPARATOR);
  out += ADCABE::run();
  return out;
}

}