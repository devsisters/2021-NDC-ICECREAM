#include "ACCCE.h"
#include "A/ACCCEA.h"
#include "B/ACCCEB.h"
#include "C/ACCCEC.h"
#include "D/ACCCED.h"
#include "E/ACCCEE.h"

namespace ACCCE {

std::string run() {
  std::string out("ACCCE");
  out += std::string(SEPARATOR);
  out += ACCCEA::run();
  out += std::string(SEPARATOR);
  out += ACCCEB::run();
  out += std::string(SEPARATOR);
  out += ACCCEC::run();
  out += std::string(SEPARATOR);
  out += ACCCED::run();
  out += std::string(SEPARATOR);
  out += ACCCEE::run();
  return out;
}

}