#include "AEABA.h"
#include "A/AEABAA.h"
#include "B/AEABAB.h"
#include "C/AEABAC.h"
#include "D/AEABAD.h"
#include "E/AEABAE.h"

namespace AEABA {

std::string run() {
  std::string out("AEABA");
  out += std::string(SEPARATOR);
  out += AEABAA::run();
  out += std::string(SEPARATOR);
  out += AEABAB::run();
  out += std::string(SEPARATOR);
  out += AEABAC::run();
  out += std::string(SEPARATOR);
  out += AEABAD::run();
  out += std::string(SEPARATOR);
  out += AEABAE::run();
  return out;
}

}