#include "AADDA.h"
#include "A/AADDAA.h"
#include "B/AADDAB.h"
#include "C/AADDAC.h"
#include "D/AADDAD.h"
#include "E/AADDAE.h"

namespace AADDA {

std::string run() {
  std::string out("AADDA");
  out += std::string(SEPARATOR);
  out += AADDAA::run();
  out += std::string(SEPARATOR);
  out += AADDAB::run();
  out += std::string(SEPARATOR);
  out += AADDAC::run();
  out += std::string(SEPARATOR);
  out += AADDAD::run();
  out += std::string(SEPARATOR);
  out += AADDAE::run();
  return out;
}

}