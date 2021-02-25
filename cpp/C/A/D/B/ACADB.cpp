#include "ACADB.h"
#include "A/ACADBA.h"
#include "B/ACADBB.h"
#include "C/ACADBC.h"
#include "D/ACADBD.h"
#include "E/ACADBE.h"

namespace ACADB {

std::string run() {
  std::string out("ACADB");
  out += std::string(SEPARATOR);
  out += ACADBA::run();
  out += std::string(SEPARATOR);
  out += ACADBB::run();
  out += std::string(SEPARATOR);
  out += ACADBC::run();
  out += std::string(SEPARATOR);
  out += ACADBD::run();
  out += std::string(SEPARATOR);
  out += ACADBE::run();
  return out;
}

}