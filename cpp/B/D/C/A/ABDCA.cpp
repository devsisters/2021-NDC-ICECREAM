#include "ABDCA.h"
#include "A/ABDCAA.h"
#include "B/ABDCAB.h"
#include "C/ABDCAC.h"
#include "D/ABDCAD.h"
#include "E/ABDCAE.h"

namespace ABDCA {

std::string run() {
  std::string out("ABDCA");
  out += std::string(SEPARATOR);
  out += ABDCAA::run();
  out += std::string(SEPARATOR);
  out += ABDCAB::run();
  out += std::string(SEPARATOR);
  out += ABDCAC::run();
  out += std::string(SEPARATOR);
  out += ABDCAD::run();
  out += std::string(SEPARATOR);
  out += ABDCAE::run();
  return out;
}

}