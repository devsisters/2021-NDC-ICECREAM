#include "AACEA.h"
#include "A/AACEAA.h"
#include "B/AACEAB.h"
#include "C/AACEAC.h"
#include "D/AACEAD.h"
#include "E/AACEAE.h"

namespace AACEA {

std::string run() {
  std::string out("AACEA");
  out += std::string(SEPARATOR);
  out += AACEAA::run();
  out += std::string(SEPARATOR);
  out += AACEAB::run();
  out += std::string(SEPARATOR);
  out += AACEAC::run();
  out += std::string(SEPARATOR);
  out += AACEAD::run();
  out += std::string(SEPARATOR);
  out += AACEAE::run();
  return out;
}

}