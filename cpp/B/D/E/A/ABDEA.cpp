#include "ABDEA.h"
#include "A/ABDEAA.h"
#include "B/ABDEAB.h"
#include "C/ABDEAC.h"
#include "D/ABDEAD.h"
#include "E/ABDEAE.h"

namespace ABDEA {

std::string run() {
  std::string out("ABDEA");
  out += std::string(SEPARATOR);
  out += ABDEAA::run();
  out += std::string(SEPARATOR);
  out += ABDEAB::run();
  out += std::string(SEPARATOR);
  out += ABDEAC::run();
  out += std::string(SEPARATOR);
  out += ABDEAD::run();
  out += std::string(SEPARATOR);
  out += ABDEAE::run();
  return out;
}

}