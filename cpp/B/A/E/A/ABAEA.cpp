#include "ABAEA.h"
#include "A/ABAEAA.h"
#include "B/ABAEAB.h"
#include "C/ABAEAC.h"
#include "D/ABAEAD.h"
#include "E/ABAEAE.h"

namespace ABAEA {

std::string run() {
  std::string out("ABAEA");
  out += std::string(SEPARATOR);
  out += ABAEAA::run();
  out += std::string(SEPARATOR);
  out += ABAEAB::run();
  out += std::string(SEPARATOR);
  out += ABAEAC::run();
  out += std::string(SEPARATOR);
  out += ABAEAD::run();
  out += std::string(SEPARATOR);
  out += ABAEAE::run();
  return out;
}

}