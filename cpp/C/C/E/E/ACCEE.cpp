#include "ACCEE.h"
#include "A/ACCEEA.h"
#include "B/ACCEEB.h"
#include "C/ACCEEC.h"
#include "D/ACCEED.h"
#include "E/ACCEEE.h"

namespace ACCEE {

std::string run() {
  std::string out("ACCEE");
  out += std::string(SEPARATOR);
  out += ACCEEA::run();
  out += std::string(SEPARATOR);
  out += ACCEEB::run();
  out += std::string(SEPARATOR);
  out += ACCEEC::run();
  out += std::string(SEPARATOR);
  out += ACCEED::run();
  out += std::string(SEPARATOR);
  out += ACCEEE::run();
  return out;
}

}