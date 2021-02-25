#include "ACE.h"
#include "A/ACEA.h"
#include "B/ACEB.h"
#include "C/ACEC.h"
#include "D/ACED.h"
#include "E/ACEE.h"

namespace ACE {

std::string run() {
  std::string out("ACE");
  out += std::string(SEPARATOR);
  out += ACEA::run();
  out += std::string(SEPARATOR);
  out += ACEB::run();
  out += std::string(SEPARATOR);
  out += ACEC::run();
  out += std::string(SEPARATOR);
  out += ACED::run();
  out += std::string(SEPARATOR);
  out += ACEE::run();
  return out;
}

}