#include "ABECE.h"
#include "A/ABECEA.h"
#include "B/ABECEB.h"
#include "C/ABECEC.h"
#include "D/ABECED.h"
#include "E/ABECEE.h"

namespace ABECE {

std::string run() {
  std::string out("ABECE");
  out += std::string(SEPARATOR);
  out += ABECEA::run();
  out += std::string(SEPARATOR);
  out += ABECEB::run();
  out += std::string(SEPARATOR);
  out += ABECEC::run();
  out += std::string(SEPARATOR);
  out += ABECED::run();
  out += std::string(SEPARATOR);
  out += ABECEE::run();
  return out;
}

}