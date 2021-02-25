#include "ADDAA.h"
#include "A/ADDAAA.h"
#include "B/ADDAAB.h"
#include "C/ADDAAC.h"
#include "D/ADDAAD.h"
#include "E/ADDAAE.h"

namespace ADDAA {

std::string run() {
  std::string out("ADDAA");
  out += std::string(SEPARATOR);
  out += ADDAAA::run();
  out += std::string(SEPARATOR);
  out += ADDAAB::run();
  out += std::string(SEPARATOR);
  out += ADDAAC::run();
  out += std::string(SEPARATOR);
  out += ADDAAD::run();
  out += std::string(SEPARATOR);
  out += ADDAAE::run();
  return out;
}

}