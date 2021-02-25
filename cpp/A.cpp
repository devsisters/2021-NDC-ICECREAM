#include "A.h"
#include "A/AA.h"
#include "B/AB.h"
#include "C/AC.h"
#include "D/AD.h"
#include "E/AE.h"

namespace A {

std::string run() {
  std::string out("A");
  out += std::string(SEPARATOR);
  out += AA::run();
  out += std::string(SEPARATOR);
  out += AB::run();
  out += std::string(SEPARATOR);
  out += AC::run();
  out += std::string(SEPARATOR);
  out += AD::run();
  out += std::string(SEPARATOR);
  out += AE::run();
  return out;
}

}