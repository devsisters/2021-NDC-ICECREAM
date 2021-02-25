#include "ADDBA.h"
#include "A/ADDBAA.h"
#include "B/ADDBAB.h"
#include "C/ADDBAC.h"
#include "D/ADDBAD.h"
#include "E/ADDBAE.h"

namespace ADDBA {

std::string run() {
  std::string out("ADDBA");
  out += std::string(SEPARATOR);
  out += ADDBAA::run();
  out += std::string(SEPARATOR);
  out += ADDBAB::run();
  out += std::string(SEPARATOR);
  out += ADDBAC::run();
  out += std::string(SEPARATOR);
  out += ADDBAD::run();
  out += std::string(SEPARATOR);
  out += ADDBAE::run();
  return out;
}

}