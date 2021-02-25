#include "AEABE.h"
#include "A/AEABEA.h"
#include "B/AEABEB.h"
#include "C/AEABEC.h"
#include "D/AEABED.h"
#include "E/AEABEE.h"

namespace AEABE {

std::string run() {
  std::string out("AEABE");
  out += std::string(SEPARATOR);
  out += AEABEA::run();
  out += std::string(SEPARATOR);
  out += AEABEB::run();
  out += std::string(SEPARATOR);
  out += AEABEC::run();
  out += std::string(SEPARATOR);
  out += AEABED::run();
  out += std::string(SEPARATOR);
  out += AEABEE::run();
  return out;
}

}