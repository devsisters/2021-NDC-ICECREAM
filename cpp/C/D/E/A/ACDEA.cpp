#include "ACDEA.h"
#include "A/ACDEAA.h"
#include "B/ACDEAB.h"
#include "C/ACDEAC.h"
#include "D/ACDEAD.h"
#include "E/ACDEAE.h"

namespace ACDEA {

std::string run() {
  std::string out("ACDEA");
  out += std::string(SEPARATOR);
  out += ACDEAA::run();
  out += std::string(SEPARATOR);
  out += ACDEAB::run();
  out += std::string(SEPARATOR);
  out += ACDEAC::run();
  out += std::string(SEPARATOR);
  out += ACDEAD::run();
  out += std::string(SEPARATOR);
  out += ACDEAE::run();
  return out;
}

}