#include "ADDDA.h"
#include "A/ADDDAA.h"
#include "B/ADDDAB.h"
#include "C/ADDDAC.h"
#include "D/ADDDAD.h"
#include "E/ADDDAE.h"

namespace ADDDA {

std::string run() {
  std::string out("ADDDA");
  out += std::string(SEPARATOR);
  out += ADDDAA::run();
  out += std::string(SEPARATOR);
  out += ADDDAB::run();
  out += std::string(SEPARATOR);
  out += ADDDAC::run();
  out += std::string(SEPARATOR);
  out += ADDDAD::run();
  out += std::string(SEPARATOR);
  out += ADDDAE::run();
  return out;
}

}