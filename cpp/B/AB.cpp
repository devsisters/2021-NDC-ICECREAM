#include "AB.h"
#include "A/ABA.h"
#include "B/ABB.h"
#include "C/ABC.h"
#include "D/ABD.h"
#include "E/ABE.h"

namespace AB {

std::string run() {
  std::string out("AB");
  out += std::string(SEPARATOR);
  out += ABA::run();
  out += std::string(SEPARATOR);
  out += ABB::run();
  out += std::string(SEPARATOR);
  out += ABC::run();
  out += std::string(SEPARATOR);
  out += ABD::run();
  out += std::string(SEPARATOR);
  out += ABE::run();
  return out;
}

}