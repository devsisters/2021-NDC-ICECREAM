#include "ACECE.h"
#include "A/ACECEA.h"
#include "B/ACECEB.h"
#include "C/ACECEC.h"
#include "D/ACECED.h"
#include "E/ACECEE.h"

namespace ACECE {

std::string run() {
  std::string out("ACECE");
  out += std::string(SEPARATOR);
  out += ACECEA::run();
  out += std::string(SEPARATOR);
  out += ACECEB::run();
  out += std::string(SEPARATOR);
  out += ACECEC::run();
  out += std::string(SEPARATOR);
  out += ACECED::run();
  out += std::string(SEPARATOR);
  out += ACECEE::run();
  return out;
}

}