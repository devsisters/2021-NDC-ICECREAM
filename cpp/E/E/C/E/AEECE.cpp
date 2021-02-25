#include "AEECE.h"
#include "A/AEECEA.h"
#include "B/AEECEB.h"
#include "C/AEECEC.h"
#include "D/AEECED.h"
#include "E/AEECEE.h"

namespace AEECE {

std::string run() {
  std::string out("AEECE");
  out += std::string(SEPARATOR);
  out += AEECEA::run();
  out += std::string(SEPARATOR);
  out += AEECEB::run();
  out += std::string(SEPARATOR);
  out += AEECEC::run();
  out += std::string(SEPARATOR);
  out += AEECED::run();
  out += std::string(SEPARATOR);
  out += AEECEE::run();
  return out;
}

}