#include "ACCE.h"
#include "A/ACCEA.h"
#include "B/ACCEB.h"
#include "C/ACCEC.h"
#include "D/ACCED.h"
#include "E/ACCEE.h"

namespace ACCE {

std::string run() {
  std::string out("ACCE");
  out += std::string(SEPARATOR);
  out += ACCEA::run();
  out += std::string(SEPARATOR);
  out += ACCEB::run();
  out += std::string(SEPARATOR);
  out += ACCEC::run();
  out += std::string(SEPARATOR);
  out += ACCED::run();
  out += std::string(SEPARATOR);
  out += ACCEE::run();
  return out;
}

}