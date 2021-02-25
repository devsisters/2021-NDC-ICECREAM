#include "ACCBA.h"
#include "A/ACCBAA.h"
#include "B/ACCBAB.h"
#include "C/ACCBAC.h"
#include "D/ACCBAD.h"
#include "E/ACCBAE.h"

namespace ACCBA {

std::string run() {
  std::string out("ACCBA");
  out += std::string(SEPARATOR);
  out += ACCBAA::run();
  out += std::string(SEPARATOR);
  out += ACCBAB::run();
  out += std::string(SEPARATOR);
  out += ACCBAC::run();
  out += std::string(SEPARATOR);
  out += ACCBAD::run();
  out += std::string(SEPARATOR);
  out += ACCBAE::run();
  return out;
}

}