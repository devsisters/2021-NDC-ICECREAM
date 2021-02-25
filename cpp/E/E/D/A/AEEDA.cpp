#include "AEEDA.h"
#include "A/AEEDAA.h"
#include "B/AEEDAB.h"
#include "C/AEEDAC.h"
#include "D/AEEDAD.h"
#include "E/AEEDAE.h"

namespace AEEDA {

std::string run() {
  std::string out("AEEDA");
  out += std::string(SEPARATOR);
  out += AEEDAA::run();
  out += std::string(SEPARATOR);
  out += AEEDAB::run();
  out += std::string(SEPARATOR);
  out += AEEDAC::run();
  out += std::string(SEPARATOR);
  out += AEEDAD::run();
  out += std::string(SEPARATOR);
  out += AEEDAE::run();
  return out;
}

}