#include "AEA.h"
#include "A/AEAA.h"
#include "B/AEAB.h"
#include "C/AEAC.h"
#include "D/AEAD.h"
#include "E/AEAE.h"

namespace AEA {

std::string run() {
  std::string out("AEA");
  out += std::string(SEPARATOR);
  out += AEAA::run();
  out += std::string(SEPARATOR);
  out += AEAB::run();
  out += std::string(SEPARATOR);
  out += AEAC::run();
  out += std::string(SEPARATOR);
  out += AEAD::run();
  out += std::string(SEPARATOR);
  out += AEAE::run();
  return out;
}

}